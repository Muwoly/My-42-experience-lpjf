/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:28:04 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:04:38 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)(b1 + i) != *(unsigned char *)(b2 + i))
			return (*(unsigned char *)(b1 + i) - *(unsigned char *)(b2 + i));
		i++;
	}
	return (0);
}
