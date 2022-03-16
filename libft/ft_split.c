/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:09:35 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/16 19:20:50 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_malloc(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				count++;
				break;
			}
		}
		if (s[i] == c)
			i++;
	}
	return (count);
}

static size_t	count_str(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char 	**ret;
	size_t	start;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	ret = (char **) malloc(sizeof(char *) * (count_malloc(s, c) + 1));
//	printf("\n%ld\n", count_malloc(s, c) + 1);
	start = 0;
	i = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		ret[i] = (char *) malloc(sizeof(char) * (count_str((s + start), c) + 1));
		if (!ret)
			return (NULL);
//		printf("\n%ld\n", count_str((s + start), c));
		j = 0;
		while (s[start] != c && s[start])
		{
			ret[i][j] = s[start];
			start++;
			j++;
		}
		ret[i][j] = '\0';
//		printf("\n%s\n", ret[i]);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}




// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	k;
// 	char	**ret;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	if (!s)
// 		return NULL;
// 	if (c == 0)
// 	{
// 		ret = (char **) malloc(sizeof(char *) * 2);
// 		ret[0] = ft_strdup(s);
// 		ret[1] = (char *) malloc(sizeof(char));
// 		ret[1] = NULL;
// 		return (ret);
// 	}
// 	ret = (char **) ft_calloc(sizeof(char *), ((nbr_of_malloc(s, c) + 1)));
// 	if (ret == NULL)
// 		return NULL;
// //	printf("\n%li\n", nbr_of_malloc(s, c) + 1);
// 	while (i < ft_strlen(s) + 1)
// 	{
// 		while (s[i] == c)
// 			i++;
// //		printf("\n%li\n", size_until_next_c(s + i, c) + 1);
// 		if (s[i] == '\0')
// 		{
// 	//		printf("\n%s\n", ret[0]);
// 	//		ret[j] = NULL;
// 			return (ret);
// 		}
// 		ret[j] = (char *) malloc(sizeof(char) * (size_until_next_c(s + i, c) + 1));
// 		if (ret[j] == NULL)
// 			return NULL;
// 		while (s[i] != c)
// 		{
// 			ret[j][k] = (char)s[i];
// 			// printf("\n%c\n", ret[j][k]);
// 			i++;
// 			k++;
// 		}
// 		ret[j][k] = '\0';
// 		j++;
// 		k = 0;
// 		// printf("\n%zu\n", i);
// 		// printf("\n%zu\n", ft_strlen(s));
// 	}
// 	return (ret);
// }



// char	**ft_split(char const *s, char c)
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