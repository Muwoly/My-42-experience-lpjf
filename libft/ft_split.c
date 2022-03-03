/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:09:35 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/26 15:32:24 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*s1;
	char	*s2;
	char	**ret;

	i = 0;
	while (i < (int) ft_strlen(s))
	{
		if (s[i] == c)
		{
			s1 = (char *) malloc(ft_strlen(s) - ft_strlen(&s[i]) + 1);
			s2 = (char *) malloc(ft_strlen(&s[i]) + 1);
			ft_strlcpy(s1, s, ft_strlen(s) - ft_strlen(&s[i]) + 1);
			ft_strlcpy(s2, &s[i], ft_strlen(&s[i]) + 1);
			ret = (char **) malloc(3);
			ret[0] = s1;
			ret[1] = s2;
			ret[2] = NULL;
			if (s1 == NULL || s2 == NULL || ret == NULL)
				return (NULL);
			return (ret);
		}
		i++;
	}
	return (NULL);
}
