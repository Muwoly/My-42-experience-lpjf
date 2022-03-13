/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:59:54 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/10 13:50:33 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	putnbr(char *ret, int i, int n)
{
	char	p;

	if (n > 0)
	{
		i--;
		putnbr(ret, i, n / 10);
		p = (n % 10);
		ret[i] = p + 48;
	}
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;

	i = count_nb(n);
	if (n == -2147483648)
	{
		ret = (char *) malloc(sizeof(char) * 12);
		if (ret == NULL)
			return (NULL);
		ft_strlcpy(ret, "-2147483648", 12);
	}
	else if (n < 0)
	{
		ret = (char *) malloc(sizeof(char) * (i + 2));
		if (ret == NULL)
			return (NULL);
		ret[0] = '-';
		putnbr(ret, i + 1, n * -1);
		ret[i + 1] = '\0';
	}
	else if (n == 0)
	{
		ret = (char *) malloc(sizeof(char) * 2);
		if (ret == NULL)
			return (NULL);
		ft_strlcpy(ret, "0", 2);
	}
	else
	{
		ret = (char *) malloc(sizeof(char) * (i + 1));
		if (ret == NULL)
			return (NULL);
		putnbr(ret, i, n);
		ret[i] = '\0';
	}
	return (ret);
}
