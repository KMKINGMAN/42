/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:04:32 by mkurkar           #+#    #+#             */
/*   Updated: 2024/05/08 17:08:52 by mkurkar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	printhex(char byte)
{
	char	*hexdigits;
	char	hex[3];

	hexdigits = "0123456789abcdef";
	hex[0] = hexdigits[byte / 16];
	hex[1] = hexdigits[byte % 16];
	hex[2] = '\0';
	write(1, hex, 2);
}

void	print_address(void *addr)
{
	char				*hexdigits;
	unsigned long long	address;
	char				hex[16];
	int					i;

	hexdigits = "0123456789abcdef";
	address = (unsigned long long)addr;
	i = 0;
	while (i < 16)
	{
		hex[15 - i] = hexdigits[address % 16];
		address /= 16;
		i++;
	}
	write(1, hex, 16);
}

void	stage_one(unsigned char *ptr, int size, int i)
{
	int		j;
	char	c;

	j = 0;
	while ((++j - 1) < 16)
	{
		if (i + (j - 1) < size)
		{
			printhex(ptr[i + (j - 1)]);
			if ((j - 1) % 2 == 1)
				write(1, " ", 1);
		}
		else
			write(1, "  ", 2);
	}
	write(1, " ", 1);
	j = 0;
	while ((++j - 1) < 16 && i + (j - 1) < size)
	{
		c = ptr[i + (j - 1)];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	int				j;

	ptr = (unsigned char *)addr;
	i = 0;
	j = 0;
	while (i < size)
	{
		print_address(&ptr[i]);
		write(1, ": ", 2);
		stage_one(ptr, size, i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	// char message[] = "Bonjour les amin ches\0\0\0c\0 est 
	// fou\rtout\nce qu on peut faire avec";

    // printf("%p", message);
	ft_print_memory("asdfasdfqwertytyzxcvzxcv\0\0\xff\x7f\x01", 29);	return (0);
}*/