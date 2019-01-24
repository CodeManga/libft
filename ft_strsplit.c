/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 21:52:44 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/07 14:29:05 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_no_of_words(char const *str, char c)
{
	int		index;
	int		words;

	words = 0;
	index = 0;
	if (str[index] != c)
	{
		words++;
		index++;
	}
	while (str[index])
	{
		if (str[index] == c && str[index + 1] != c)
		{
			index++;
			if (str[index] != '\0')
				words++;
			if (str[index] == '\0')
				return (words);
		}
		else
			index++;
	}
	return (words);
}

static int	ft_word_len(char const *str, char c, int index)
{
	int		len;

	len = 0;
	while (str[index] != c)
	{
		len++;
		index++;
		if (str[index] == c || str[index] == '\0')
			return (len);
	}
	while (str[index])
	{
		if (str[index] == '0')
			return (len);
		while (str[index] != c)
		{
			len++;
			index++;
			if (str[index] == c || str[index] == '\0')
				return (len);
		}
		index++;
	}
	return (len);
}

static char	*ft_get_next_word(char const *str, char c, int index)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_strnew(ft_word_len(str, c, index));
	while (str[index] != c)
	{
		word[i++] = str[index++];
		if (str[index] == c || str[index] == '\0')
			return (word);
	}
	while (str[index])
	{
		if (str[index] == '\0')
			return (word);
		while (str[index] != c)
		{
			word[i++] = str[index++];
			if (str[index] == c || str[index] == '\0')
				return (word);
		}
		index++;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		index;
	int		i;

	if (!s)
		return (NULL);
	index = 0;
	i = 0;
	if (!(str = (char**)malloc(sizeof(*str) * (ft_no_of_words(s, c) + 1))))
		return (NULL);
	while (s[index])
	{
		if (s[index] == c)
			index++;
		else
		{
			str[i] = ft_get_next_word(s, c, index);
			i++;
			while (s[index] != c && s[index])
				index++;
		}
	}
	str[i] = NULL;
	return (str);
}
