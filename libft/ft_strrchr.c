/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:36:48 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/07 17:49:08 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	check_after is a boolean function that returns true (1)
	if s[0] is the last occurence,
	and false (0) if s[0] is not the last occurence.
*/

static int	check_after(char *s)
{
	int		i;
	char	c;

	i = 1;
	c = s[0];
	while (s[i])
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c && check_after((char *) &s[i]) == 1)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (0);
}
