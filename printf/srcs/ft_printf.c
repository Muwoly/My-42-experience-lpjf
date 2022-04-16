/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:51:33 by loris             #+#    #+#             */
/*   Updated: 2022/04/15 13:08:18 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// has to include cspdiuxX%

static size_t	ft_printchar(int c)
{
	write (1, &c, 1);
	return (1);
}

static size_t	dispatch(const char s, va_list args)
{
	size_t	ret;

	ret = 0;
	if (s == 'c')
		ret += ft_printchar(va_arg(args, int));
	else if (s == 's')
		ret += ft_printstr(va_arg(args, char *));
	// else if (s == 'p')
	// 	ret += ft_printpointer(va_arg(args, void *));
	else if (s == 'd')
		ret += ft_printid(va_arg(args, int));
	else if (s == 'i')
		ret += ft_printid(va_arg(args, int));
	else if (s == 'u')
		ret += ft_printu(va_arg(args, unsigned int));
	// else if (s == 'x')
	// 	ret += ft_print(va_arg(args, int));
	// else if (s == 'X')
	// 	ret += ft_print(va_arg(args, int));
	else if (s == '%')
		ret += ft_printchar('%');
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	size_t	ret;
	size_t	i;
	va_list	args;

	ret = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ret += dispatch(s[i], args);
		}
		else
			ret += ft_printchar(s[i]);
		i++;
	}
	va_end(args);
	return (ret);
}

// has to include cspdiuxX%

// Each invocation of the va_arg macro modifies ap
// to point to the next variable argument.

// https://youtu.be/S-ak715zIIE?t=185
