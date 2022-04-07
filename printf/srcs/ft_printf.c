/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:51:33 by loris             #+#    #+#             */
/*   Updated: 2022/03/29 18:05:11 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dispatch(const char s, ...)
{
	if (s == c)
		ft_putchar_fd(c, 1);
}

int	ft_printf(const char *s, ...)
{
	int	i;
	int	ret;
	va_list args;

// https://youtu.be/S-ak715zIIE?t=185

	i = 0;
	ret = 0;
	va_start(args, s);
	vsnprintf(stderr, format, args);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			dispatch(s[i], ...)
		}
		else
			ft_putchar_fd(s[i], 1);
		i++;
	}
	return (i + 1);
	va_end(argptr);
}

// has to include cspdiuxX%