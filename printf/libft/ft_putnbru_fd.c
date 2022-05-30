/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:53:01 by lpenelon          #+#    #+#             */
/*   Updated: 2022/05/25 15:16:07 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_fd(unsigned int n, int fd)
{
	char	p;

	if (n > 0)
	{
		putnbr_fd(n / 10, fd);
		p = (n % 10) + 48;
		ft_putchar_fd(p, fd);
	}
}

void	ft_putnbru_fd(unsigned int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n > 0)
		putnbr_fd(n, fd);
}
