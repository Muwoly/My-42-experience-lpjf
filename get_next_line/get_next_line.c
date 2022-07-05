/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:08:51 by lpenelon          #+#    #+#             */
/*   Updated: 2022/07/05 12:26:27 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*read_file(int fd, char *store)
{
	int		i;
	char	*buff;
	char	*tmp;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	if (!store)
	{
		store = malloc(sizeof(char));
		if (!store)
			return (NULL);
		store[0] = '\0';
	}
	i = 1;
	while (i != 0 && !ft_strchr(store, '\n'))
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
	store = read_file(fd, store);
	ret = get_first_line(store);
	store = delete_first_line(store);
	if (ft_strncmp(ret, "\0", 1) == 0)
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}
