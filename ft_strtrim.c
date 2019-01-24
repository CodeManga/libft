/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 20:45:49 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/24 09:16:18 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	int		index;
	int		len;
	char	*s;

	if (!str)
		return (NULL);
	len = (int)ft_strlen((const char*)str);
	index = -1;
	while (ft_iswhitespace(str[len - 1]))
		len--;
	while (ft_iswhitespace(str[++index]))
		len--;
	if (len <= 0)
		len = 0;
	if (!(s = (char*)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	str += index;
	index = -1;
	while (++index < len)
		s[index] = *str++;
	s[index] = '\0';
	return (s);
}
