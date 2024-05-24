/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:27:14 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/21 20:52:18 by mkurkar          ###   ########.fr       */
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

	i = 0;
	while (argc > ++i)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
	}
	return (0);
}
