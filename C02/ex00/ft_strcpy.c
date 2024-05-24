/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:17:11 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/08 17:11:50 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*source_message;
// 	char	*dest = "dsa";

// 	source_message = "Hi There My Name is Muhammad";
// 	ft_strcpy(dest, source_message);
// 	printf("Hi There \n%s", dest);
// 	return (0);
// }
