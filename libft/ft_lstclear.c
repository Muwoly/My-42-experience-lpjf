/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:56:51 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/11 16:34:45 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!*lst)
		return ;
	*lst = ft_lstlast(*lst);
	while (*lst->next == NULL)
	{
		ft_lstdelone(*lst, *lst->content);
		*lst = *lst->next; 
	}
	ft_lstdelone(*lst, *lst->content);
	lst = NULL;

	while
}
