/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:22:49 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/19 20:03:48 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *message)
{
	int	i;
	int	j;
	int	sign;

	i = -1;
	sign = 1;
	while (message[++i])
	{
		if (message[i] == '-' || message[i] == '+')
			sign = -1;
		j = -1;
		while (message[++j])
		{
			if (message[i] == message[j] && i != j)
				sign = -1;
		}
	}
	if (sign != 1)
	{
		return (sign);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				check;
	unsigned int	n;
	char			out;

	check = is_valid_base(base);
	if (check != -1 && check != 0 && check != 1)
	{
		n = nbr;
		if (nbr < 0)
		{
			write(1, "-", 1);
			n = -nbr;
		}
		if (n >= (unsigned int)check)
			ft_putnbr_base(n / check, base);
		out = base[n % check];
		write(1, &out, 1);
	}
}
