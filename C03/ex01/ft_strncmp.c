/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:50:19 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/13 19:00:03 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((--n + 1) > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (!s1[i])
			return (0);
		i++;
	}
	return (0);
}

// int main ()
// {
//   char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//   int n;
//   printf ("Looking for R2 astromech droids...\n");
//   for (n=0 ; n<3 ; n++)
//     if (ft_strncmp (str[n],"R2xx",2) == 0)
//     {
//       printf ("found %s\n",str[n]);
//     }
//   return (0);
// }