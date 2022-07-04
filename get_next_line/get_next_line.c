/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:08:51 by lpenelon          #+#    #+#             */
/*   Updated: 2022/07/04 18:45:54 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// void	delete_first_line(char *store)
// {
// 	int		i;
// 	int		n;

// 	i = 0;
// 	n = 0;
// 	while (store[i] != '\n' && store[i] != '\0')
// 		i++;
// 	if (store[i] == '\n')
// 		i++;
// 	while (store[i] != '\0')
// 	{
// 		store[n] = store[i];
// 		n++;
// 		i++;
// 	}
// 	store[n] = '\0';
// 	if (store[0] == '\0')
// 		free(store);
// }

char	*delete_first_line(char *store)
{
	char	*tmp;
	char	*tmp2;

	if (store[0] == '\0')
	{
		free(store);
		return (NULL);
	}
	tmp = ft_strchr(store, '\n');
	if (tmp == NULL)
	{
		free(store);
		free(tmp);
		return (NULL);
	}
	tmp2 = malloc(sizeof(char) * ft_strlen(tmp));
	ft_strlcpy(tmp2, tmp + 1, ft_strlen(tmp));
	free(store);
	return (tmp2);
}

char	*get_first_line(char *store)
{
	char	*ret;
	char	*tmp;
	int		i;

	i = 0;
	tmp = malloc(sizeof(char) * (ft_strlen(store) + 2));
	if (!tmp)
		return (NULL);
	while (store[i] != '\n' && store[i] != '\0')
	{
		tmp[i] = store[i];
		i++;
	}
	if (store[i] == '\n')
	{
		tmp[i] = '\n';
		tmp[i + 1] = '\0';
	}
	if (store[i] == '\0')
		tmp[i] = '\0';
	ret = ft_strdup(tmp);
	free(tmp);
	return (ret);
}

// must read and add at every call. not ok to store everything whatsoever
char	*read_file(int fd, char *store)
{
	int		i;
	char	*buff;
	char	*tmp;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	store = malloc(sizeof(char));
	if (!store)
		return (NULL);
	store[0] = '\0';
	i = BUFFER_SIZE;
	while (i == BUFFER_SIZE)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(buff);
			free(store);
			return (NULL);
		}
		buff[i] = '\0';
		tmp = ft_strdup(store);
		free(store);
		store = ft_strjoin(tmp, buff);
		free(tmp);
	}
	free (buff);
	return (store);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!store)
		store = read_file(fd, store);
	ret = get_first_line(store);
	if (store)
		store = delete_first_line(store);
	return (ret);
}

// When buffer is reading whole file.
// only way to then return the next line is to have a static variable (variable that keep it's value once the function is called again)
// store in the static variable the .txt file
// then when called: --> check if file has already been read.
// If so --> send next line and remove it from the static variable
// if not --> add the read part to the static variable.

// cc -Wall -Wextra -Werror -D BUFFER_SIZE=10 get_next_line.c get_next_line_utils.c main.c get_next_line.h