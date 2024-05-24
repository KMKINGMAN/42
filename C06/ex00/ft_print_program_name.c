/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:24:18 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/21 20:52:16 by mkurkar          ###   ########.fr       */
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
	int	len;

	len = ft_strlen(argv[0]);
	if (argc > 0)
	{
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
