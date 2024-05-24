/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:26:04 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/13 19:00:04 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main() {
//   char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
//   int result;

//   result = ft_strcmp(str1, str2);
//   printf("ft_strcmp(str1, str2) = %d\n", result);
//   result = ft_strcmp(str1, str3);
//   printf("ft_strcmp(str1, str3) = %d\n", result);

//   return (0);
// }
