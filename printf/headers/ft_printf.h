/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:21:53 by loris             #+#    #+#             */
/*   Updated: 2022/04/15 13:00:05 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int     ft_printf(const char *string, ...);
size_t	ft_printstr(char *str);
size_t  ft_printpointer(void *i);
size_t	ft_printid(int n);
size_t	ft_printu(unsigned int n);

#endif