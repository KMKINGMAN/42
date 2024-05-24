/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:21:51 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:21 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_string(char *str);

void	free_tab_rows(int **tab, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	**allocate_tab(void)
{
	int	**tab;
	int	i;

	tab = (int **)malloc(4 * 8);
	if (tab == NULL)
	{
		ft_print_string("Error:\n");
		return (NULL);
	}
	i = 0;
	while (i < 4)
	{
		tab[i] = (int *)malloc(4 * 4);
		if (tab[i] == NULL)
		{
			ft_print_string("Error:\n");
			free_tab_rows(tab, i);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

void	free_tab(int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
