/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:19:30 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/08 21:34:08 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_start(char *s1, char *set)
{
	int	i;

	i = 0;
	while (s1[i] && check(s1[i], set) == 1)
		i++;
	return (i);
}

int	ft_end(char *s1, char *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s;
	int		end;
	char	*res;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0' || set[0] == '\0')
		return (ft_strdup(s1));
	s = ft_start((char *)s1, (char *)set);
	end = ft_end((char *)s1, (char *)set);
	if (s > end)
		return (ft_strdup(""));
	res = malloc(end - s + 2);
	if (!res)
		return (NULL);
	while (s + i <= end)
	{
		res[i] = s1[s + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
