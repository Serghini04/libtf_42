/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:33:10 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/01 22:10:19 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

int main()
{
	int str[] = {};
	int *p = str;
	printf("%d\n", *((int *)ft_memcpy(p,"55", 5)));
	//printf("%d\n",*( (int *)ft_memcpy(p, "55", 5) + 1 ));
	printf("%d\n", *(int *)memcpy(p, "5", 5));
}

