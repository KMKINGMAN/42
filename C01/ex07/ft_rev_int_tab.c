/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:49:03 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/04 18:29:58 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = -1;
	temp = 0;
	while (++index < --size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
	}
}
/* 
int	main(void)
{
	int c[] = {1, 2, 3, 4};
	ft_rev_int_tab(c, 4);
	printf("c0 is %d\nc1 is %d", c[0], c[1]);
	return (0);
}
*/
