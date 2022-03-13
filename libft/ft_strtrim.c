/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:01:13 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/09 15:54:23 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_to_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	i = 0;
	ret = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] == set[j])
				ret++;
			j++;
		}
		i++;
	}
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	tmp[ft_strlen(s1) +1];
	size_t	i;
	size_t	j;

	ret = (char *) malloc(ft_strlen(s1) - count_to_trim(s1, set) + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(tmp, s1, (ft_strlen(s1) + 1));
	i = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (tmp[i] == set[j])
			{
				ft_strlcpy(&tmp[i], &tmp[i + 1], ft_strlen(tmp) - i + 1);
				j = -1;
			}
			j++;
		}
		i++;
	}
	ft_strlcpy(ret, tmp, (ft_strlen(s1) - count_to_trim(s1, set) + 1));
	return (ret);
}
