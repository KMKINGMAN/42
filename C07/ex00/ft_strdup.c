/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:06:56 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/22 12:30:18 by mkurkar          ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*string;

	src_len = ft_strlen(src);
	i = -1;
	string = (char *)malloc(sizeof(char) * src_len);
	while (++i < src_len)
	{
		string[i] = src[i];
	}
	string[i] = '\0';
	return (string);
}
