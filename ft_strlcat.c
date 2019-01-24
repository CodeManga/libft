/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:38:00 by hmthimun          #+#    #+#             */
/*   Updated: 2017/07/24 16:26:11 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	char	*ptr;

	src_len = ft_strlen(src);
	dst_len = ft_strlen((const char*)dst);
	if (dst_len < size)
	{
		ptr = dst + dst_len;
		ft_bzero(ptr, size - dst_len);
		ft_memcpy(ptr, src, size - dst_len - 1);
		return (dst_len + src_len);
	}
	return (size + src_len);
}
