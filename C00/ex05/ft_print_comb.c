/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:39:37 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/02 11:29:24 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	v_print(char mf, char ms, char mt)
{
	write(1, &mf, 1);
	write(1, &ms, 1);
	write(1, &mt, 1);
	if (!(mf == '7' && ms == '8' && mt == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		index;
	char	mf;
	char	ms;
	char	mt;

	index = 0;
	mf = '0';
	ms = '0';
	mt = '0';
	while (mf <= '7')
	{
		ms = mf + 1;
		while (ms <= '9')
		{
			mt = ms + 1;
			while (mt <= '9')
			{
				v_print(mf, ms, mt);
				mt++;
			}
			ms++;
		}
		mf++;
	}
}
