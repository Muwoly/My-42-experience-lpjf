/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:17:13 by loris             #+#    #+#             */
/*   Updated: 2022/06/08 16:19:37 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*a;

	i = ft_strlen((char *) s) + 1;
	a = (char *) malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	ft_memcpy(a, s, i);
	return (a);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen((char *) src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *) src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		n;
	size_t		dstcnt;

	n = ft_strlen(dst);
	dstcnt = n;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen((char *) src));
	while (src[i] != '\0' && n < dstsize - 1)
	{
		dst[n++] = src[i++];
	}
	dst[n] = '\0';
	if (dstcnt < dstsize)
		return (dstcnt + ft_strlen((char *) src));
	return (dstsize + ft_strlen((char *) src));
}
