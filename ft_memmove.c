/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 22:59:31 by hmthimun          #+#    #+#             */
/*   Updated: 2017/07/25 15:46:15 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dt;
	unsigned char	*sr;

	dt = (unsigned char*)dest;
	sr = (unsigned char*)src;
	if (dt > sr)
	{
		dt = dt + n;
		sr = sr + n;
		while (n)
		{
			*--dt = *--sr;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
