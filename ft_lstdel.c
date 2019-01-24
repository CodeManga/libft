/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 03:37:14 by hmthimun          #+#    #+#             */
/*   Updated: 2017/08/07 12:08:43 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmp_next;

	if (!(alst && del))
		return ;
	tmp = *alst;
	while (tmp)
	{
		tmp_next = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = tmp_next;
	}
	*alst = NULL;
}
