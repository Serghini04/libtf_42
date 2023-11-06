/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:29:54 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:56 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	i = *lst;
	while (i)
	{
		ft_lstdelone(i->content, del);
		i = i->next;
	}
	free(*lst);
	*lst = NULL;
}
