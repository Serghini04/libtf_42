/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:52:18 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/05 22:24:20 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	i = *lst;
	if (!lst)
	{
		*lst = new;
		return;
	}
	while (i->next)
		i = i->next;
	i->next = new;
}

int main()
{
	t_list	*head;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew("hi me1"));
	ft_lstadd_back(&head, ft_lstnew("hi me2"));
	ft_lstadd_back(&head, ft_lstnew("hi me3"));
	ft_lstadd_back(&head, ft_lstnew("hi me4"));
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}
