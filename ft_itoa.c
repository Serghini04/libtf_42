/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:47 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/03 11:20:56 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_res(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		end;
	char	*res;

	len = len_res(n);
	end = len;
	res = malloc(len + 1);
	if (n == 0)
		res[0] = 48;
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	len--;
	while (n > 0)
	{
		res[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	res[end] = '\0';
	return (res);
}
