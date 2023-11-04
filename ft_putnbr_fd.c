/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:02:18 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/04 21:07:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;
	char		res;

	if (n >= 0)
		nb = n;
	else
	{
		write(fd, "-", 1);
		nb = -n;
	}
	if (nb >= 0 && nb <= 9)
	{
		res = nb + 48;
		write(fd, &res, 1);
	}
	else
	{
		ft_putnbr_fd(fd, nb / 10);
		ft_putnbr_fd(fd, nb % 10);
	}
}
