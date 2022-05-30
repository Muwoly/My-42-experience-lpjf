/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:48:26 by loris             #+#    #+#             */
/*   Updated: 2022/05/25 15:00:34 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printstr(char *str)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	convert(unsigned long int i, int count)
{
	if (i > 0)
	{
		count = convert(i / 16, count + 1);
		ft_putchar_fd("0123456789abcdef"[i % 16], 1);
	}
	return (count);
}

long unsigned int	ft_printpointer(unsigned long int i)
{
	int	count;

	count = 2;
	if (i == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	count = count + convert(i, 0);
	return (count);
}

size_t	ft_printid(int n)
{
	int		i;
	int		tmp;

	ft_putnbr_fd(n, 1);
	i = 0;
	tmp = n;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (tmp == -2147483648)
		return (11);
	else if (tmp < 0)
		return (i + 1);
	else if (tmp == 0)
		return (1);
	return (i);
}

size_t	ft_printu(unsigned int n)
{
	int		i;

	ft_putnbru_fd(n, 1);
	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
