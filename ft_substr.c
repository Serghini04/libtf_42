/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:26:01 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/02 10:47:35 by meserghi         ###   ########.fr       */
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
	if (!s)
		return (NULL);
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

/*int main()
{
	printf("%s\n", ft_substr("Bonjour comment ca va?", 5, 8));
	free("Bonjour comment ca va?");
}
*/
