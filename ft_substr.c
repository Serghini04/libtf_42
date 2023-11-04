/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:26:01 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/04 12:57:40 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = start;
	j = 0;
	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		return (ft_strdup(s + start));
	res = malloc(len + 1);
	if (!res)
		return (0);
	while (j < len && s[i])
	{
		res[j] = ((char *)s)[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
/*
int main()
{
	printf("%s\n", ft_substr("Bonjour comment ca va?", 5, 1000000));
}
*/
