/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:02:49 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/21 12:12:40 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = -1;
	if (nb <= 0)
		return (0);
	while (++i != nb + 1)
	{
		if (i * i == nb)
		{
			return (i);
		}
	}
	return (0);
}

// int main(void)
// {
//     int x = ft_sqrt(1);
//     printf("%d", x);
//     return (0);
// }