/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:23:03 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/31 22:50:58 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while ((((char *)s1)[i] && (((char *)s1)[i] == ((char *)s2)[i])) && i < n)
		i++;
	return ((int )(((char *)s1)[i] - ((char *)s2)[i]));
}
