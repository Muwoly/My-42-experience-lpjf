/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:22:38 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/15 14:54:17 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < len)
	{
		if ((unsigned char)s1[i] != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// {
// 	size_t	i;

// 	i = 0;
// 	if (len <= 0)
// 		return (0);
// 	while (s1[i] && s2[i] && i < len)
// 	{
// 		if (s1[i] > s2[i])
// 			return (1);
// 		else if (s1[i] < s2[i])
// 			return (-1);
// 		i++;
// 	}
// 	if (s1[i] && s2[i])
// 		return (0);
// 	else if (s1[i])
// 		return (1);
// 	else if (s2[i])
// 		return (-1);
// 	else
// 		return (0);
// }
