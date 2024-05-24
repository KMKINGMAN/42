/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:34:26 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/21 20:52:19 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *message)
{
	int	i;

	i = -1;
	while (message[++i])
		;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i != 1)
	{
		write(1, argv[i - 1], ft_strlen(argv[i - 1]));
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
