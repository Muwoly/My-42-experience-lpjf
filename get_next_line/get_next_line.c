/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:21:43 by loris             #+#    #+#             */
/*   Updated: 2022/05/30 18:28:44 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*putinside(char *buf, char *ret, int i)
{
	ret[i] = buf[0];
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*ret;
	char		tmp[256];
	int			result;
	int			i;

	result = 1;
	i = 0;
	result = read(fd, buf, 1);
	if (result == -1)
		return (NULL);
	if (result == 0 || result == '\n')
		return (NULL);
	if (result == 1)
	{
		while (buf[i] && buf[i] == '\n')
		{
			tmp[i] = buf[i];
			i++;
		}
	}
	ret = (char *) malloc (sizeof(char) * ft_strlen(tmp));
	ft_memcpy(ret, tmp, ft_strlen(tmp));
	return (ret);
}
