/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 00:43:54 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/07 12:10:51 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	int		len;

	len = 0;
	if (n >= 1 && n <= 9)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_results(char *str, int sign, int len, long int num)
{
	while (((sign == 1) ? (len > 0) : (len >= 0)))
	{
		str[len] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;
	int		sign;

	num = n;
	len = ft_int_len(n);
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num == 0)
		return (ft_strdup("0"));
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	sign = 0;
	if (num < 0)
	{
		sign = 1;
		num *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	len--;
	return (ft_results(str, sign, len, num));
}
