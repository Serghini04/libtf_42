/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:05:13 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/01 11:32:05 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && i + j < len)
			j++;
		if (!needle[j])
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char *str = strnstr("hi me", "0", 7);
	printf("%s\n",ft_strnstr("hi me", "0", 7));
	printf("%s\n", str);
}*/
