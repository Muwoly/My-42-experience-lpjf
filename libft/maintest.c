/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:06:49 by lpenelon          #+#    #+#             */
/*   Updated: 2022/02/20 16:13:35 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	// isalpha
	printf("isalpha:\n");
	printf("1st Real func / 2nd Your func\n");
	printf("a: %i %i\n", isalpha('a'), ft_isalpha('a'));
	printf("Z: %i %i\n", isalpha('Z'), ft_isalpha('Z'));
	printf("@: %i %i\n", isalpha('@'), ft_isalpha('@'));
	printf("0: %i %i\n", isalpha('0'), ft_isalpha('0'));
	printf("SPACE: %i %i\n", isalpha(' '), ft_isalpha(' '));
	printf("NULL: %i %i\n", isalpha(0), ft_isalpha(0));
	printf("DEL: %i %i\n", isalpha(127), ft_isalpha(127));
	printf("€: %i %i\n", isalpha(128), ft_isalpha(128));
	printf("é: %i %i\n\n", isalpha(233), ft_isalpha(233));
}
