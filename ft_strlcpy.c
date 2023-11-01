/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:25:13 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/01 12:51:56 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (src[0] == '\0')
		return (0);
	while (src[i] && dstsize - 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*int main()
{
	char he[2] = "a";
	char he1[2] = "a";
	int i = strlcpy(he, "hi", 2);
	int i1 = ft_strlcpy(he1, "hi", 2);
	printf("%s,	%d\n", he, i);
	printf("%s,	%d\n", he1, i1);
}*/
