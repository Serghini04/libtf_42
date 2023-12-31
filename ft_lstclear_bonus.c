/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:26:53 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/09 10:48:17 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;
	t_list	*swap;

	if (!lst || !del)
		return ;
	i = *lst;
	while (i)
	{
		swap = i;
		i = i->next;
		ft_lstdelone(swap, del);
	}
	*lst = NULL;
}
