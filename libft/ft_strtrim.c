/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:01:13 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/16 16:47:52 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	flag(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && flag(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && flag(s1[end - 1], set))
		end--;
	ret = (char *) malloc(sizeof(*s1) * (end - start + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		ret[i] = s1[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
