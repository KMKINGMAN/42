/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:07:57 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:27 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_string_length(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

int	ft_str_int(char *str)
{
	int	number;
	int	is_negative;

	number = 0;
	is_negative = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	if (is_negative)
	{
		return (-number);
	}
	return (number);
}

void	ft_print_int(int number)
{
	unsigned int	num;

	if (number < 0)
	{
		num = -number;
	}
	else
	{
		num = number;
	}
	if (number < 0)
		ft_printchar('-');
	if (num >= 10)
		ft_print_int(num / 10);
	ft_printchar(num % 10 + '0');
}
