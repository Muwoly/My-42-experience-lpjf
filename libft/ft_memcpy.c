/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:50:04 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/21 17:17:15 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	int			i;
	char		*dst1;
	const char	*src1;

	i = 0;
	dst1 = (char *) dst;
	src1 = (char *) src;
	while (i < (int) len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
