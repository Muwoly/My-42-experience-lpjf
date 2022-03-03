/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:28:04 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/25 11:03:07 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	int		len1;
	int		i;

	dst1 = (char *) dst;
	src1 = (char *) src;
	len1 = (int) len;
	i = 0;
	while (src1[i] && i < len1)
		i++;
	printf("%i\n", i);
	if (len1 > i)
	{
		len1 = i;
		while (len1 >= 0)
		{
			dst1[len1] = src1[len1];
			len1--;
//			printf("%s\n", dst);
		}
		dst1[i] = '\0';
	}
	else
	{
		while (len1 >= 0)
		{
			dst1[len1] = src1[len1];
			len1--;
		}
		dst1[i] = '\0';
	}
	return (dst);
}
