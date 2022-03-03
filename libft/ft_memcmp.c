/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:28:04 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/20 17:18:45 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	int		i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *) b1;
	s2 = (char *) b2;
	while (s1[i] && s2[i] && i < (int) len)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s1[i] && s2[i])
		return (0);
	else if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	else
		return (0);
}
