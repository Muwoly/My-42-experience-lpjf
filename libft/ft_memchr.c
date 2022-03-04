/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:29:30 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/04 18:42:37 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		if (*(char *)(b + i) == (char)c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}
