/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:31:29 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/07 16:39:38 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*data;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		data = ft_lstnew(f(lst->content));
		if (!data)
		{
			ft_lstdelone(head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, data);
		lst = lst->next;
	}
	return (head);
}
/*
void print_lst(t_list *i)
{
	while (i)
	{
		printf("%s\n", i->content);
		i = i->next;
	}
}

void ft_free(void *str)
{
	free(str);
}

void *ch(void *str)
{
	int	i;

	i = 0;
	while (((char *)str)[i])
	{
		((char *)str)[i] = 'a';
		i++;
	}
	return (str);
}

int main()
{
	t_list	*i;

	i = NULL;
	ft_lstadd_back(&i, ft_lstnew(ft_strdup("Hi me 1")));
	ft_lstadd_back(&i, ft_lstnew(ft_strdup("Hi me 2")));
	ft_lstadd_back(&i, ft_lstnew(ft_strdup("Hi me 3")));
	print_lst(i);
	print_lst(ft_lstmap(i, ch, ft_free));
}
*/
