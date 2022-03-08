/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:59:34 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/07 18:18:22 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		n;
	int		dstcnt;

	n = ft_strlen(dst);
	dstcnt = n;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && n < (int) dstsize - 1)
	{
		dst[n++] = src[i++];
	}
	dst[n] = '\0';
	return (dstcnt + ft_strlen(src));
}
