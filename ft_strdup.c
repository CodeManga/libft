/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 05:13:40 by hmthimun          #+#    #+#             */
/*   Updated: 2017/07/21 10:39:37 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		index;
	int		len;

	index = 0;
	len = (int)ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	while (index < len)
	{
		str[index] = s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
