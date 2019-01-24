/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:10:06 by hmthimun          #+#    #+#             */
/*   Updated: 2017/07/25 15:24:44 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	len = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	while (s[index])
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
