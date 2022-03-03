/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:37:53 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/25 12:05:37 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *) malloc(total_len);
	ft_strlcpy(ret, s1, total_len);
	ft_strlcat(ret, s2, total_len);
	return (ret);
}
