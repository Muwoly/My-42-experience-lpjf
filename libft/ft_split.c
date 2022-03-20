/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:09:35 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/20 23:42:44 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_malloc(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{	
			flag = 1;
			i++;
		}
		while (s[i] != c && s[i])
		{
			flag = 0;
			i++;
		}
		count++;
	}
	if (flag == 1)
		count--;
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

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	start;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	ret = (char **)malloc(sizeof(char *) * (count_malloc(s, c) + 1));
	if (!ret)
		return (NULL);
	start = 0;
	i = 0;
	while (i < count_malloc(s, c))
	{
		while (s[start] == c)
			start++;
		ret[i] = (char *)malloc(sizeof(char) * (count_str((s + start), c) + 1));
		if (!ret[i])
			return (NULL);
		j = 0;
		while (s[start] != c && s[start])
			ret[i][j++] = s[start++];
		if (j != 0)
			ret[i][j] = '\0';
		i++;
	}
	ret[i] = 0;
	return (ret);
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**ret;
// 	size_t	start;
// 	size_t	i;
// 	size_t	j;

// 	if (!s)
// 		return (0);
// 	ret = (char **)malloc(sizeof(char *) * (count_malloc(s, c) + 1));
// 	if (!ret)
// 		return (NULL);
// 	start = 0;
// 	i = 0;
// 	while (i < count_malloc(s, c))
// 	{
// 		while (s[start] == c)
// 			start++;
// 		ret[i] = (char *)malloc(sizeof(char) * (count_str((s + start), c) + 1));
// 		if (!ret[i])
// 			return (NULL);
// 		j = 0;
// 		while (s[start] != c && s[start])
// 			ret[i][j++] = s[start++];
// 		if (j != 0)
// 			ret[i][j] = '\0';
// 		i++;
// 	}
// 	ret[i] = 0;
// 	return (ret);
// }
