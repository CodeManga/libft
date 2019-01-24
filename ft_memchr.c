/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 22:31:46 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/07 13:17:07 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char*)s;
	ch = (unsigned char)c;
	while (n)
	{
		if (*str == ch)
			return ((void*)str);
		str++;
		n--;
	}
	return (NULL);
}
