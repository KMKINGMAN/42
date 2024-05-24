/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:16:45 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/21 20:52:40 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_print(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
		{
			write(1, &argv[i][j], 1);
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
		{
			temp = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j--] = temp;
		}
	}
	ft_print(argc, argv);
	return (0);
}
