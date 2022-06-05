/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:21:43 by loris             #+#    #+#             */
/*   Updated: 2022/06/05 16:52:18 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*ret;
	char		tmp[BUFFER_SIZE + 1];
	int			result;

	result = read(fd, tmp, BUFFER_SIZE);
	if (result == -1 || result == 0)
		return (NULL);
	ret = ft_strdup(tmp);
	return (ret);
}

// When buffer is reading whole file.
// only way to then return the next line is to have a static variable (variable that keep it's value once the function is called again)
// store in the static variable the next lines
// then when called, check if file has already been read. If so, send next line and remove it from the static variable
// if not --> add the read part to the static variable.