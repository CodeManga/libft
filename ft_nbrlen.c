/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 23:45:27 by hmthimun          #+#    #+#             */
/*   Updated: 2017/10/01 01:02:30 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_nbrlen(long nb, long base)
{
	long	length;

	length = 1;
	while (ft_power_long(base, length) <= nb)
		length++;
	return (length);
}
