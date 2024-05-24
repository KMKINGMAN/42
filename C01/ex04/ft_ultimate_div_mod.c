/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:52:26 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/04 18:16:49 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 98;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Value of a is %d\nValue of b is %d", a, b);
	return (0);
}
*/
