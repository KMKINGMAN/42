/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:28:41 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/04 18:13:21 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	ft_swap(&a, &b);
	printf("The Numbe a is %d\nThe Number b is %d", a, b);
	return (0);
}
*/
