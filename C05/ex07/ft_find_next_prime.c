/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:23:05 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/21 15:45:00 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			prime++;
		i++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = -1;
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}
