/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:10:20 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:04:55 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*a;

	i = ft_strlen(s) + 1;
	a = (char *) malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	ft_memcpy(a, s, i);
	return (a);
}
