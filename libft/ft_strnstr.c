/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:47:12 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/20 17:54:54 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(n) == 0)
		return ((char *) h);
	while (h[i])
	{
		j = 0;
		if (h[i] == n[0])
		{
			while (n[j] && i + j < (int) len)
			{
				if (h[i + j] == n[j] && i + j < (int) len)
				{
					if (j++ >= (int) ft_strlen(n) - 1)
						return ((char *) &h[i]);
				}
				else
					break ;
			}
		}
		i++;
	}
	return (0);
}
