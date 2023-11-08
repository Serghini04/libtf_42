/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:31:29 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/08 15:35:03 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*data;
	t_list	*t;
	t_list	*i;

	head = NULL;
	t = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (t)
	{
		i = f(t->content);
		data = ft_lstnew(i);
		if (!data)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, data);
		t = t->next;
	}
	return (head);
}
