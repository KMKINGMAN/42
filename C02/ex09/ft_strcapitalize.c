/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:37:19 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/08 17:12:05 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	to_lower_case(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int	is_alphanumeric(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	capital_number;
	int	i;

	i = -1;
	capital_number = 1;
	while (str[++i] != 0)
	{
		if (is_alphanumeric(str[i]))
		{
			if (capital_number)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				capital_number = 0;
			}
			else
				str[i] = to_lower_case(str[i]);
		}
		else
			capital_number = 1;
	}
	return (str);
}

// int	main(void)
// {
// 	char	message[100] = "salut, comment tu vas ? 
//42mots quarante-deux; cinquante+et+un";

// 	ft_strcapitalize(message);
// 	write(1, message, 61);
// 	return (0);
// }
