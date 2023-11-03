/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:19:30 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/03 11:53:33 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char val, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (val == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	end_s1(char *s1, char *set)
{
	int	len;

	len = ft_strlen(s1);
	if (!set[0])
		return (len);
	while (len >= 0 && ft_check(s1[len], set) == 0)
		len--;
	while (len >= 0 && ft_check(s1[len], set) == 1)
		len--;
	if (len < 0)
		return (ft_strlen(s1));
	return (len);
}

int	ft_count(char *s1, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	if (!set[0])
		return (j);
	while (s1[i] && ft_check(s1[i], set) == 1)
		i++;
	while (ft_check(s1[j], set) == 0)
		j--;
	while (s1[j] && ft_check(s1[j], set) == 1)
	{
		j--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;
	int		end;
	int		j;

	j = 0;
	i = 0;
	if (!set[0] && !s1[0])
		return (ft_strdup(""));
	end = end_s1((char *)s1, (char *)set) + 1;
	len = ft_count((char *)s1, (char *)set);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (s1[i] && ft_check(((char *)s1)[i], (char *)set) == 1)
		i++;
	while (s1[i] && i < end)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}
