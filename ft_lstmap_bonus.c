/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:31:29 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/08 22:52:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*i;
	t_list	*node;
	void	*data;

	head = NULL;
	i = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (i)
	{
		data = f(i->content);
		node = ft_lstnew(data);
		if (!node)
		{
			del(data);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		i = i->next;
	}
	return (head);
}
