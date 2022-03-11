/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:26:50 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/11 14:34:43 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// {
// 	t_list *last;
	
// 	if (!*lst)
// 	{
// 		ft_lstadd_front(lst, new);
// 		return ;
// 	}
// 	last = ft_lstlast(*lst);
// 	last->next = new;	
// }
