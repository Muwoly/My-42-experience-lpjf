/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:08:51 by lpenelon          #+#    #+#             */
/*   Updated: 2022/06/27 14:30:51 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	delete_first_line(char *store)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (store[i] != '\n' && store[i] != '\0')
		i++;
	if (store[i] == '\n')
		i++;
	while (store[i] != '\0')
	{
		store[n] = store[i];
		n++;
		i++;
	}
	store[n] = '\0';
}

char	*get_first_line(char *store)
{
	char	*ret;
	char	tmp2[BUFFER_SIZE + 1];
	int		i;

	i = 0;
	while (store[i] != '\n' && store[i] != '\0')
	{
		tmp2[i] = store[i];
		i++;
	}
	tmp2[i] = '\0';
	ret = ft_strdup(tmp2);
	if (ret == NULL)
		return (NULL);
	return (ret);
}

int	read_file(int fd, char *store)
{
	int		i;
	char	*tmp;

	tmp = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (tmp == NULL)
		return (0);
	i = 1;
	while (i > 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmp);
			return (-1);
		}
		if (i == 0)
			break ;
		ft_strlcat(store, tmp, (ft_strlen(store) + ft_strlen(tmp) + 1));
		ft_bzero(tmp, (sizeof(char) * (BUFFER_SIZE + 1)));
	}
	free (tmp);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*ret;

	if (!store)
	{
		store = ft_calloc(1, 16711568);
		if (store == NULL)
			return (NULL);
		if (read_file(fd, store) == -1)
			return (NULL);
	}
	if (store[0] == '\0')
		return ("(null)");
	ret = get_first_line(store);
	delete_first_line(store);
	if (store != NULL)
		free(store);
	return (ret);
}

// When buffer is reading whole file.
// only way to then return the next line is to have a static variable (variable that keep it's value once the function is called again)
// store in the static variable the .txt file
// then when called: --> check if file has already been read.
// If so --> send next line and remove it from the static variable
// if not --> add the read part to the static variable.

// cc -Wall -Wextra -Werror -D BUFFER_SIZE=10 get_next_line.c get_next_line_utils.c main.c get_next_line.h