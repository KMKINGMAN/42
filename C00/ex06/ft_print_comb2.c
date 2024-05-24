/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:13:19 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/02 16:32:27 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int f, int s)
{
	int	t;

	t = f / 10 + '0';
	write(1, &t, 1);
	t = f % 10 + '0';
	write(1, &t, 1);
	write(1, " ", 1);
	t = s / 10 + '0';
	write(1, &t, 1);
	t = s % 10 + '0';
	write(1, &t, 1);
	if (!(f == 98 && s == 99))
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	while (f <= 99)
	{
		s = f + 1;
		while (s <= 99)
		{
			print_numbers(f, s);
			s++;
		}
		f++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
