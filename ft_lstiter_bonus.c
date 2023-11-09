/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:57:24 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/08 11:55:46 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*i;

	i = lst;
	if (!lst || !f)
		return ;
	while (i)
	{
		f(i->content);
		i = i->next;
	}
}
/*
void	f(void *str)
{
	while (*(char *)str)
	{
		*(char *)str = 'a';
		str++;
	}
}

void	print_list(t_list *i)
{
	while (i)
	{
		printf("%s\n", i->content);
		i = i->next;
	}
}
int main()
{
	t_list *head;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hi me 1")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hi me 2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hi me 3")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hi me 4")));
	print_list(head);
	ft_lstiter(head, f);
	print_list(head);
}
*/
