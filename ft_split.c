/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:25:51 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/04 19:59:02 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

int	len_word(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*get_word(char *s, char c)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = len_word(s, c);
	res = malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		len;

	i = 0;
	len = count_word((char *)s, c);
	res = malloc((len + 1) * sizeof(char **));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			res[i++] = get_word((char *)s, c);
		while (*s && *s != c)
			s++;
	}
	res[i] = 0;
	return (res);
}
