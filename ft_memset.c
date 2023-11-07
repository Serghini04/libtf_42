/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:27:24 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/07 20:23:02 by meserghi         ###   ########.fr       */
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

/*int main()
{
	int t[] ={0,1,482,3};

	ft_memset(&t[2], 5, 2);
	ft_memset(&t[2], 57, 1); // 00000101 00111001        5     57
	for(int i = 0; i < 4; i++)
		printf("%d\n" , t[i]);
		return(0);
}
*/
