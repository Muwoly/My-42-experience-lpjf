/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:08:51 by lpenelon          #+#    #+#             */
/*   Updated: 2022/06/07 19:05:17 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char	*save(char *store, char *tmp)
{
	int	i;
	i = ft_strlcat(store, tmp, (ft_strlen(store) + ft_strlen(tmp) + 1));
	return (store);
}

char	*delete_first_line(char *store)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (store[i] != '\n' && store[i] != '\0')
		i++;
	while (store[i] != '\0')
	{
		store[n] = store[i];
		n++;
		i++;
	}
	store[n] = '\0';
	return (store);
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

char	*get_next_line(int fd)
{
	static char	*store;
	char		*ret;
	char		*tmp;
	int			result;

	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (tmp == NULL)
		return (NULL);
	printf("1\n");
	result = read(fd, tmp, BUFFER_SIZE);
	printf("2\n");
	if (result == -1)
		return (NULL);
	else if (result > 0)
		store = save(store, tmp);
	printf("3\n");
	free(tmp);
	printf("4\n");
	if (result == 0 && store[0] == '\0')
		return ("(null)");
	ret = get_first_line(store);
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