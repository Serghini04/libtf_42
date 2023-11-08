/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:26:53 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/08 12:05:44 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	i = *lst;
	if (!lst || !del)
		return ;
	while (i)
	{
		i = i->next;
		ft_lstdelone(*lst, del);
		*lst = i;
	}
	free(*lst);
	*lst = NULL;
}
