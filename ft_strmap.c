/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:44:23 by hmthimun          #+#    #+#             */
/*   Updated: 2017/10/01 00:38:48 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	if (!(new = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		new[i++] = (*f)(*s);
		s++;
	}
	new[i] = '\0';
	return (new);
}
