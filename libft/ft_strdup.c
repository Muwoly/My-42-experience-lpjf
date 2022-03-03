/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:10:20 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/24 16:59:22 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*a;

	i = ft_strlen((char *) s);
	a = (char *) malloc(i * sizeof(char));
	ft_memcpy(a, s, i);
	return (a);
}
