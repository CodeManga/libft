/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 23:44:31 by hmthimun          #+#    #+#             */
/*   Updated: 2017/10/01 01:05:06 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	int		sign;
	long	nbr;
	char	*str;
	int		len;

	nbr = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	len = (sign == -1) ? 2 : 1;
	while ((nbr /= base) >= 1)
		len++;
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	nbr = (value < 0) ? -(long)value : value;
	while (len-- + sign)
	{
		str[len] = (nbr % base < 10) ? nbr % base + '0' : nbr % base + 'A' - 10;
		nbr = nbr / base;
	}
	(len == 0) ? str[len] = '-' : 0;
	return (str);
}
