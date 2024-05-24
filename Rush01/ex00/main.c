/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:07:53 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:23 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "general.h"
#include <stdio.h>

int		ft_string_length(char *str);
void	ft_print_string(char *str);
int		**allocate_tab(void);
int		*ft_get_numbers(char *str);
void	free_tab(int **tab);

int		solve(int tab[4][4], int entry[16], int pos);

void	ft_display_soulution(int tab[4][4]);

int	main(int argc, char **argv)
{
	int	**tab;
	int	*entry;

	if (argc != 2 || ft_string_length(argv[1]) != 4 * 4 * 2 - 1)
	{
		ft_print_string("Error:\n");
		return (0);
	}
	tab = allocate_tab();
	if (tab == NULL)
		return (0);
	entry = ft_get_numbers(argv[1]);
	if (entry == NULL)
	{
		ft_print_string("Error:\n");
		free_tab(tab);
		return (0);
	}
	if (solve((int (*)[4]) tab, entry, 0))
		ft_display_soulution((int (*)[4]) tab);
	else
	{
		ft_print_string("Error:\n");
	}
	return (0);
}
