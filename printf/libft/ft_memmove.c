/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:28:04 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:04:43 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;
	char		*lastdst;
	const char	*lastsrc;

	dst1 = dst;
	src1 = src;
	if (!dst && !src)
		return (NULL);
	if (dst1 < src1)
		while (len--)
			*dst1++ = *src1++;
	else
	{
		lastsrc = (char *)src1 + (len - 1);
		lastdst = dst1 + (len - 1);
		while (len--)
			*lastdst-- = *lastsrc--;
	}
	return (dst);
}
