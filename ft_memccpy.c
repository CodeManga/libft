/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 16:26:58 by hmthimun          #+#    #+#             */
/*   Updated: 2017/07/24 16:48:06 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*dst_pt;
	unsigned char	*src_pt;

	ch = (unsigned char)c;
	dst_pt = (unsigned char*)dst;
	src_pt = (unsigned char*)src;
	while (n-- > 0)
	{
		*dst_pt = *src_pt;
		if (*dst_pt++ == ch)
			return (dst_pt);
		src_pt++;
	}
	return (NULL);
}
