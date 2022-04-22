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

static int	print_hexa(char *ret, char *base)
{
	int		i;
	int		count;
	int		pick;

	i = 0;
	count = 0;
	while ((ret[i] == '0') && (ret[i + 1] == '0') && \
	(ret[i + 2] == '0') && (ret[i + 3] == '0'))
		i += 4;
	while (i < 29)
	{
		pick = 0;
		if (ret[i] == '1')
			pick += 8;
		if (ret[i + 1] == '1')
			pick += 4;
		if (ret[i + 2] == '1')
			pick += 2;
		if (ret[i + 3] == '1')
			pick += 1;
		count += ft_printchar(base[pick]);
		i += 4;
	}
	return (count);
}

static char	*negative(char *ret)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (ret[i] == '0')
			ret[i] = '1';
		else
			ret[i] = '0';
		i++;
	}
	return (ret);
}

static int	assign(int n, int neg, char *base, char *ret)
{
	int	i;

	i = 31;
	while (i >= 0)
	{
		ret[i] = (n % 2) + 48;
		n = n / 2;
		i--;
	}
	if (neg == 0)
		ret = negative(ret);
	neg = print_hexa(ret, base);
	return (neg);
}

size_t	ft_printx(int n, char *base)
{
	char	*ret;
	int		neg;

	neg = 1;
	if (n < 0)
	{
		neg = 0;
		n += 1;
	}
	else if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	ret = (char *) ft_calloc ((sizeof(char)), 32);
	if (ret == NULL)
		return (0);
	neg = assign(n, neg, base, ret);
	free(ret);
	return (neg);
}
