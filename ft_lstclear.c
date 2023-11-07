/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:26:53 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/07 14:59:56 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	i = *lst;
	while (i)
	{
		i = i->next;
		ft_lstdelone(*lst, del);
		*lst = i;
	}
	free(*lst);
}

/*
void ft_printlst(t_list *i)
{
	while (i)
	{
		printf("%s\n", i->content);
		i = i->next;
	}
}

void f(void *str)
{
	free(str);
}

int main()
{
	t_list *i;

	i = NULL;
	ft_lstadd_back(&i, ft_lstnew(ft_strdup("hi me1")));
	ft_lstadd_back(&i, ft_lstnew(ft_strdup("hi me2")));
	ft_lstadd_back(&i, ft_lstnew(ft_strdup("hi me3")));
	ft_printlst(i);
	ft_lstclear(&i, f);
	ft_printlst(i);
}
*/
