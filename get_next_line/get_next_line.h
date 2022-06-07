/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:17:13 by loris             #+#    #+#             */
/*   Updated: 2022/06/07 17:13:55 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	*ft_memcpy(void *dst, const void *src, size_t len);
int		ft_strlen(char *s);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		main(void);

#endif