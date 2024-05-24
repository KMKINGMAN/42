/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:06:59 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/22 12:30:25 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*array_of_numbers;
	unsigned int	index;

	index = 0;
	if (min >= max)
		return (NULL);
	array_of_numbers = (int *)malloc(sizeof(int) * (max - min));
	if (array_of_numbers == NULL)
	{
		return (array_of_numbers);
	}
	while (min < max)
		array_of_numbers[index++] = min++;
	return (array_of_numbers);
}
