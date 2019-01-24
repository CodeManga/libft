/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 01:06:34 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/07 16:35:50 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		index;
	int		len;
	char	tmp;

	tmp = '\0';
	len = (int)ft_strlen((const char*)str);
	index = 0;
	while (index < len)
	{
		tmp = str[index];
		str[index] = str[len];
		str[len] = tmp;
		index++;
		len--;
	}
	return (str);
}
