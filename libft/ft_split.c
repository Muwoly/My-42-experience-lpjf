/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:09:35 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/09 17:50:58 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_of_malloc(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			i++;
			if (s[i] == c && s[i] == '\0')
				j++;
		}
		i++;
	}
	// printf("\n%i\n", j);
	return (j);
}

static size_t	size_until_next_c(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	// printf("\n%zu\n", i);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**ret;

	i = 0;
	j = 0;
	k = 0;
	ret = (char **) malloc(sizeof(char *) * (nbr_of_malloc(s, c) + 1));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		ret[j] = (char *) malloc(sizeof(char) * (size_until_next_c(s + i, c) + 1));
		ret[j][size_until_next_c(s + i, c)] = '\0';
		if (s[i] == '\0')
		{
			// printf("\n%s\n", ret[0]);
			ret[j] = NULL;
			return (ret);
		}
		while (s[i] != c)
		{
			ret[j][k] = (char)s[i];
			// printf("\n%c\n", ret[j][k]);
			i++;
			k++;
		}
		j++;
		k = 0;
	}
	return (ret);
}

// {
// 	size_t	i;
// 	char	**ret;
// 	char	*s1;
// 	char	*s2;

// 	i = 0;
// 	while (i < ft_strlen(s))
// 	{
// 		if (s[i] == c)
// 		{
// 			s1 = (char *) malloc(ft_strlen(s) - ft_strlen(&s[i]) + 1);
// 			s2 = (char *) malloc(ft_strlen(&s[i]) + 1);
// 			ft_strlcpy(s1, s, ft_strlen(s) - ft_strlen(&s[i]) + 1);
// 			ft_strlcpy(s2, &s[i], ft_strlen(&s[i]) + 1);
// 			ret = (char **) malloc(3);
// 			ret[0] = s1;
// 			ret[1] = s2;
// 			ret[2] = NULL;
// 			if (s1 == NULL || s2 == NULL || ret == NULL)
// 				return (NULL);
// 			return (ret);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }