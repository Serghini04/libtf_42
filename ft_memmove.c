/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:35:33 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/03 17:50:06 by meserghi         ###   ########.fr       */
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
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int main()
{
    const unsigned char src[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned char       *dest;
    size_t          n;
    int         i;

    n = 7;
    i = 0;
    dest = ft_memmove((char *)src + 5, src + 3, n);
    while (i < 20)
        write(1, &src[i++], 1);
    return(0);
}
// Overlapping case: copy from end to beginning.
// Non-overlapping case: copy from beginning to end.
*/
