/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:19:53 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/07 12:40:20 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*void ft_printlst(t_list *i)
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
	ft_lstdelone(i, f);
	ft_printlst(i);
}*/
// this function free frist one string node.√
