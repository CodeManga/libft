/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:14:14 by hmthimun          #+#    #+#             */
/*   Updated: 2017/07/24 12:43:35 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((int)ft_strlen(little) == 0)
		return ((char*)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && big[i + j] &&
				little[j] && little[j] == big[i + j])
		{
			j++;
			if (little[j] == '\0')
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
