/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:21:43 by loris             #+#    #+#             */
/*   Updated: 2022/06/03 13:45:23 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*ret;
	int			result;

	ret = (char *) malloc (sizeof(char) * 30);
	result = read(fd, ret, BUFFER_SIZE);
	ret[29] = '\0';
	if (result == -1 || result == 0)
		return (NULL);
	return (ret);
}
