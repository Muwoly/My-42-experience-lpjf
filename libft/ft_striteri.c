/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:27:08 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/02 15:12:35 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	while ((*void (unsigned int, char *))(s + i))
	{
		(*void (unsigned int, char *))(s + i) = f(i, &(*void (unsigned int, char *))(s + i));
		i++;
	}
	(*void (unsigned int, char *))(s + i) = '\0';
}
