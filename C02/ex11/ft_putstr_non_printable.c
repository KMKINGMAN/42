/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:54:03 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/08 17:08:34 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hexa(unsigned char byte)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (byte / 16 > 0)
	{
		print_char(hexa[byte / 16]);
		print_char(hexa[byte % 16]);
	}
	else
	{
		print_char('0');
		print_char(hexa[byte]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		
		if (str[i] < ' ' || str[i] == 127)
		{
			print_char('\\');
			ft_convert_hexa(str[i]);
		}
		else
		{
			print_char(str[i]);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("asdf\x7f\x1fhi\x01\xfflol");
	write(1, "\n", 1);
	return (0);
}*/
