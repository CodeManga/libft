/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:36:26 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/07 14:25:11 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	index;

	if (!s1 || !s2)
		return (0);
	index = 0;
	while (s1[index] && s2[index] && index < n)
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
