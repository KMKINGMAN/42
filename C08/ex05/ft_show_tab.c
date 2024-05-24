/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:23:48 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/22 19:51:41 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_stock_str.h"
#include <unistd.h>

void	ft_print_str(char *message)
{
	int	i;

	i = -1;
	while (message[++i])
	{
		write(1, &message[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	num;
	char			message;

	message = 0;
	if (nb < 0)
		num = -nb;
	else
		num = nb;
	if (nb < 0)
		ft_print_str("-");
	if (num >= 10)
		ft_putnbr(num / 10);
	message = num % 10 + '0';
	ft_print_str(&message);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int		i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_print_str(par[i].str);
		ft_print_str("\n");
		ft_putnbr(par[i].size);
		ft_print_str("\n");
		ft_print_str(par[i].copy);
		ft_print_str("\n");
	}
}
