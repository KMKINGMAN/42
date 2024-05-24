/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:07:41 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/11 22:00:09 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_right(const int tab[4][4], int pos, const int entry[16]);
int	check_col_down(const int tab[4][4], int pos, const int entry[16]);
int	check_row_left(const int tab[4][4], int pos, const int entry[16]);
int	check_col_up(const int tab[4][4], int pos, const int entry[16]);

int	check_double(const int tab[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_case(const int tab[4][4], int pos, const int entry[16])
{
	return (check_row_left(tab, pos, entry) || check_row_right(tab, pos, entry)
		|| check_col_down(tab, pos, entry) || check_col_up(tab, pos, entry));
}
