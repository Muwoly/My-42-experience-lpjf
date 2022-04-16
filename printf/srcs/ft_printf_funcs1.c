/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:48:26 by loris             #+#    #+#             */
/*   Updated: 2022/04/15 13:00:18 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printstr(char *str)
{
	if (str == NULL)
	{
		write(1, &"(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

size_t  ft_printpointer(void *i)
{
    write(1, &i, 1);
    return (1);
    // https://forum.arduino.cc/t/need-to-print-pointer-address-to-uart-without-using-printf-or-sprintf/56789/3
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