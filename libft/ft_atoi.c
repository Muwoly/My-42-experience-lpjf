/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:11:10 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/08 13:50:34 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	minus;

	i = 0;
	nbr = 0;
	minus = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus *= -1 ;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + nptr[i] - 48;
		i++;
	}
	if (minus < 0)
		nbr *= minus;
	return (nbr);
}
// {
// 	int	i;
// 	int	res;
// 	int	sign;

// 	i = 0;
// 	res = 0;
// 	sign = 1;
// 	while (nptr[i] == ' ' || nptr[i] == '-')
// 	{
// 		if (nptr[i] == '-')
// 		{
// 			sign = -1;
// 			i++;
// 			break ;
// 		}
// 	}
// 	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
// 	{
// 		res = res * 10 + (int) nptr[i] - 48;
// 		i++;
// 	}
// 	return (res * sign);
// }
