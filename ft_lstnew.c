/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 01:17:54 by hmthimun          #+#    #+#             */
/*   Updated: 2017/10/01 16:09:37 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	if (!(head = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		head->content = ft_memalloc(content_size);
		ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
	}
	else
	{
		head->content = NULL;
		head->content_size = 0;
	}
	return (head);
}
