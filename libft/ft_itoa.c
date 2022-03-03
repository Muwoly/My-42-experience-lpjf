/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:59:54 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/03 12:14:09 by lpenelon         ###   ########.fr       */
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

static int	set_div(int i)
{
	int	div;
	int	j;

	j = 0;
	div = 1;
	while (i > 0)
	{
		div = 10 * div;
		i--;
	}
	printf("%i\n", div);
	return (div);
}

static char	*lower(int i, int div, int n)
{
	char	*ret;
	int		j;

	//printf("%i\n", i);
	//printf("%i\n", div);
	ret = (char *) malloc(i + 1);
	j = 0;
	while (j < i)
	{
		ret[j++] = n / div;
		n = n % div;
		div = div / 10;
	}
	ret[j] = '\0';
	return (ret);
}

static char	*bigger(int i, int div, int n)
{
	char	*ret;
	int		j;

	ret = (char *) malloc(i + 1);
	j = 0;
	while (j < i)
	{
		ret[j] = n / div;
		printf("%i", j);
		n = n % div;
		div = div / 10;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		div;

	i = count_nb(n);
	div = set_div(i - 1);
	if (n == -2147483648)
	{
		ret = (char *) malloc(12);
		if (ret == NULL)
			return (NULL);
		ret = "-2147483648";
	}
	else if (n <= 0)
	{
		ret = lower(i, div, n);
	}
	else
	{
		ret = bigger(i, div, n);
	}
	return (ret);
}
