/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:21:53 by loris             #+#    #+#             */
/*   Updated: 2022/05/25 15:22:27 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *string, ...);
size_t	ft_printstr(char *str);
size_t	ft_printpointer(unsigned long int i);
size_t	ft_printid(int n);
size_t	ft_printu(unsigned int n);
size_t	ft_printx(int n, char *base);
size_t	ft_printchar(int c);

#endif