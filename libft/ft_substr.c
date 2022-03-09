/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:03:51 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/09 14:50:43 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (ft_strlen(s) < len)
		substr = (char *)malloc((ft_strlen(s) + 1));
	else
		substr = (char *)malloc((len + 1));
	if (start > len)
	{
		substr[0] = '\0';
		return (substr);
	}
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
