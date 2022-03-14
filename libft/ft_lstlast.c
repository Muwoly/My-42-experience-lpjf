/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loris <loris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:18:02 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/14 19:26:09 by loris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// {
// 	t_list temp;

// 	if (!lst)
// 		return (NULL);
// 	temp.next = lst;
// 	while (temp.next -> next != NULL)
// 	{
// 		temp.next = temp.next -> next;
// 	}
// 	return (temp.next);
// }