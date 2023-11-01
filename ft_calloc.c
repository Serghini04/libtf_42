/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:50:04 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/01 18:11:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ex : int *p  = calloc(10, sizeof(int));
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*res;

	i = 0;
	res = malloc(size * count);
	if (!res)
		return (NULL);
	while (i < count)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return (res);
}
