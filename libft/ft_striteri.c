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
	char				(*a)(unsigned int, char *);
	unsigned int		i;

	i = 0;
	a = (char (*)(unsigned int, char *)) f;
	while (s[i])
	{
		s[i] = a(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
