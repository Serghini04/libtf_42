/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:01:51 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/07 17:06:31 by meserghi         ###   ########.fr       */
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
	if (dstsize == 0 || !dst)
		return (spa);
	while (src[i] != '\0' && dlen < dstsize - 1)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (spa);
}

/*int main()
{
	char br[11] = "a";
	//char br1[11] = "a";
	printf("%d, %s\n", (int )ft_strlcat(NULL, "lorem", 1), br);
	//printf("%d, %s\n", (int )strlcat(br1, "lorem", 1), br1);
}
*/
