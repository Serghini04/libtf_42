/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:27:24 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/01 21:39:32 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (char )c;
		i++;
	}
	return (b);
}
int main()
{
	int t[] ={0,1,1337,3};
	ft_memset((void *)t, 97, 1);
	for(int i = 0; i < 4; i++)
		printf("%c\n" , (char)t[i]);
		return(0);
}
