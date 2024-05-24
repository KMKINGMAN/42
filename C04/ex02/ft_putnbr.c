/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:44:43 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/19 17:02:31 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
		num = -nb;
	else
		num = nb;
	if (nb < 0)
		ft_put_char('-');
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_put_char(num % 10 + '0');
}

// int main(void)
// {
//     ft_putnbr(-500);
//     return (0);
// }