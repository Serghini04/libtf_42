/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:01:51 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/01 18:21:05 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	spa;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize > dlen)
		spa = slen + dlen;
	else
		spa = slen + dstsize;
	if (dstsize == 0)
		return (spa);
	while (src[i] != '\0' && dlen < dstsize - 1)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	return (spa);
}

/*int main()
{
	char br[20] = "hi me0000";
	char br1[20] = "hi me0000";
	printf("%d, %s\n", (int )ft_strlcat(br, "550", 20), br);
	printf("%d, %s\n", (int )strlcat(br1, "550", 20), br1);
}
*/
