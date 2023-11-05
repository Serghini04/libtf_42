/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:26:11 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/05 21:18:27 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	t_list	*head;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("hi me3"));
	ft_lstadd_front(&head, ft_lstnew("hi me2"));
	ft_lstadd_front(&head, ft_lstnew("hi me1"));
	t_list	*i;

	i = head;
	while (i)
	{
		printf("%s\n", i->content);
		i = i->next;
	}
	return (0);
}
*/
