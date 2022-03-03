/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:29:28 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/25 10:57:28 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	**ret;
	int		i;

	ret = (void **) malloc(nmemb);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < (int) nmemb)
	{
		ret = (void *) malloc(size);
		ft_memcpy(ret[i], 0, 1);
		i++;
	}
	return (ret);
}
