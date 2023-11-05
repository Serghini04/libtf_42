/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:35:33 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/05 12:06:29 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int main()
{
    const unsigned char src[] = "abcdefghijklmnopqrstuvwxyz";
    const unsigned char src1[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned char       *dest;
    size_t          n;

    n = 7;
    dest = ft_memmove((char *)src + 5, src + 3, n);
    printf("%s\n", dest);
    printf("%s\n", ft_memcpy((char *)src1 + 5, src1 + 3, n));
}
// Overlapping case: copy from end to beginning.
// Non-overlapping case: copy from beginning to end.
*/
