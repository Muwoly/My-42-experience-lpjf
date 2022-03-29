/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:37:53 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:04:56 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		total_len;

	if (!s1 || !s2)
		return (0);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *) malloc(total_len);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, total_len);
	ft_strlcat(ret, s2, total_len);
	return (ret);
}
