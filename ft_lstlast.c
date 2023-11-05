/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:42:13 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/05 21:56:00 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list	*head;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("hi me5"));
	ft_lstadd_front(&head, ft_lstnew("hi me4"));
	ft_lstadd_front(&head, ft_lstnew("hi me3"));
	ft_lstadd_front(&head, ft_lstnew("hi me2"));
	t_list *i = ft_lstlast(head);
	printf("%s\n", i->content);
}
*/
