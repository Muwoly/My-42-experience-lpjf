/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:36:48 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/20 18:18:03 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (ft_strlen(s) == 1)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		else
			i++;
	}
	return (0);
}
