/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:59:34 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:04:57 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		n;
	size_t		dstcnt;

	n = ft_strlen(dst);
	dstcnt = n;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && n < dstsize - 1)
	{
		dst[n++] = src[i++];
	}
	dst[n] = '\0';
	if (dstcnt < dstsize)
		return (dstcnt + ft_strlen(src));
	return (dstsize + ft_strlen(src));
}
