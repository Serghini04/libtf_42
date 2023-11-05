/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:42 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/05 21:55:32 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*i;

	i = lst;
	count = 0;
	while (i)
	{
		i = i->next;
		count++;
	}
	return (count);
}

/*int main()
{
	t_list	*head;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("hi me5"));
	ft_lstadd_front(&head, ft_lstnew("hi me4"));
	ft_lstadd_front(&head, ft_lstnew("hi me3"));
	ft_lstadd_front(&head, ft_lstnew("hi me2"));
	printf("%d\n", ft_lstsize(head));
}*/
