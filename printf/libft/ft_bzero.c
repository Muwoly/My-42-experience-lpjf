/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:23:17 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/29 18:03:55 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) b;
	while (i < (int) len)
	{
		str[i] = '\0';
		i++;
	}
}