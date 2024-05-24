/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:17:42 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:14 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_int(int number);

void	ft_printchar(char c);

int		check_case(const int tab[4][4], int pos, const int entry[16]);

int		check_double(const int tab[4][4], int pos, int num);

int	solve(int tab[4][4], int entry[16], int pos)
{
	int	size;

	size = 1;
	if (pos == 16)
		return (1);
	while (size <= 4)
	{
		if (!check_double(tab, pos, size))
		{
			tab[pos / 4][pos % 4] = size;
			if (!check_case(tab, pos, entry))
			{
				if (solve(tab, entry, pos + 1))
					return (1);
			}
			else
			{
				tab[pos / 4][pos % 4] = 0;
			}
		}
		size++;
	}
	return (0);
}

void	ft_display_soulution(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_print_int(tab[i][j]);
			if (j != 3)
				ft_printchar(' ');
		}
		ft_printchar('\n');
	}
}
