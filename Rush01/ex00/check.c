/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:34:52 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:29 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(const int tab[4][4], int pos, const int entry[16])
{
	int	max;
	int	count;
	int	i;

	if (pos / 4 != 3)
		return (0);
	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[i][pos % 4] > max)
		{
			max = tab[i][pos % 4];
			count++;
		}
		i++;
	}
	return (entry[pos % 4] != count);
}

int	check_row_right(const int tab[4][4], int pos, const int entry[16])
{
	int	max_size;
	int	visible_towers;
	int	i;

	if (pos % 4 != 3)
		return (0);
	max_size = 0;
	visible_towers = 0;
	i = 3;
	while (i >= 0)
	{
		if (tab[pos / 4][i] > max_size)
		{
			max_size = tab[pos / 4][i];
			visible_towers++;
		}
		i--;
	}
	return (entry[12 + pos / 4] != visible_towers);
}

int	check_col_down(const int tab[4][4], int pos, const int entry[16])
{
	int	max;
	int	count;
	int	i;

	if (pos / 4 != 3)
		return (0);
	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		if (tab[i][pos % 4] > max)
		{
			max = tab[i][pos % 4];
			count++;
		}
		i--;
	}
	return (entry[4 + pos % 4] != count);
}

int	check_row_left(const int tab[4][4], int pos, const int entry[16])
{
	int	max;
	int	count;
	int	i;

	if (pos % 4 != 3)
		return (0);
	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[pos / 4][i] > max)
		{
			max = tab[pos / 4][i];
			count++;
		}
		i++;
	}
	return (entry[8 + pos / 4] != count);
}
