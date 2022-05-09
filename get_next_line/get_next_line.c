/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:21:43 by loris             #+#    #+#             */
/*   Updated: 2022/05/09 11:44:59 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*putinside(char *buf, char *ret)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		ret[i] = buf[i];
		if (buf[i] == '\n')
			return (ret);
		i++;
	}
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*ret;
	int			result;
	int			i;

	if (open(get_next_line) == -1)
		return (NULL);
	result = read(fd, buf, BUFFER_SIZE);
	if (result == -1)
		return (NULL);
	else if (result > 0)
	{
		ret = putinside(buf, ret);
	}
	else if (result == 0)
	{
	}
	return (ret);
}
