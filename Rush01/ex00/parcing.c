/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:07:48 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:17 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_input_check(int argc, char **argv)
{
	int	length;

	if (argc != 2)
		return (0);
	length = 0;
	while (argv[1][length] != '\0')
		length++;
	return (length == 31);
}

int	*ft_get_numbers(char *str)
{
	int	*numbers;
	int	index;
	int	i;

	numbers = malloc(4 * 16);
	if (numbers == NULL)
		return (NULL);
	index = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			continue ;
		numbers[index] = 0;
		while (str[i] >= '0' && str[i] <= '9')
		{
			numbers[index] = numbers[index] * 10 + (str[i] - '0');
			i++;
		}
		index++;
	}
	return (numbers);
}
