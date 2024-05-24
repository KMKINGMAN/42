/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:07:05 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/22 12:30:59 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *m)
{
	int	i;

	i = -1;
	while (m[++i])
		;
	return (i);
}

int	ft_claculate_len(char **strs, char *sep, int size)
{
	int	index;
	int	all_len;

	index = -1;
	all_len = 0;
	while (++index < size)
	{
		all_len += ft_strlen(strs[index]);
	}
	all_len += ft_strlen(sep) * (size - 1) + 1;
	return (all_len);
}

void	fill_str(char *dest, char **strc, char *sep, int size)
{
	int	current_index;
	int	index;
	int	j;

	index = -1;
	current_index = 0;
	while (++index < size)
	{
		j = -1;
		while (strc[index][++j])
		{
			dest[current_index++] = strc[index][j];
		}
		j = -1;
		while (sep[++j] && index != (size - 1))
		{
			dest[current_index++] = sep[j];
		}
	}
	dest[current_index] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		all_len;
	char	*full_message;

	all_len = ft_claculate_len(strs, sep, size);
	full_message = (char *)malloc(sizeof(char) * all_len);
	if (full_message == NULL)
	{
		return (NULL);
	}
	fill_str(full_message, strs, sep, size);
	return (full_message);
}
