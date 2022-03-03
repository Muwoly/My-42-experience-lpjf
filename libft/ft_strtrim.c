/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:01:13 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/26 12:05:13 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char *) malloc(ft_strlen(s1) - ft_strlen(set) + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, ft_strlen(s1) + 1);
	i = 0;
	while (i < (int) ft_strlen(s1))
	{
		j = 0;
		while (j < (int) ft_strlen(set))
		{
			if (ret[i] == set[j])
			{
				ft_strlcpy(&ret[i], &ret[i + 1], ft_strlen(ret) - i + 1);
				j = -1;
			}
			j++;
		}
		i++;
	}
	return (ret);
}
