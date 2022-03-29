/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:29:30 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:04:37 by loris            ###   ########.fr       */
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
