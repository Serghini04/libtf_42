/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:50:04 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/05 18:10:00 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*res;

	i = 0;
	res = (void *)malloc(size * count);
	if (!res)
		return (NULL);
	while (i < count * size)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return (res);
}
// ex : int *p  = calloc(10, sizeof(int));
