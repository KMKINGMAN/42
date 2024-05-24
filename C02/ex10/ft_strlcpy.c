/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:12:24 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/08 17:12:07 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c])
	{
		c++;
	}
	if (size < 1)
	{
		return (c);
	}
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}

// int	main(void)
// {
// 	char source[] = "hi there";
// 	char dest[100];
// 	unsigned int data = ft_strlcpy(dest, source, 8) + '0';
// 	write(1, &data, 1);
// 	return (0);
// }
