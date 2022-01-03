/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:34:38 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:48:24 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * Add the element ’new’ at the end of the list (lst).
 * If (lst) is NULL, make (new) as a new element of (lst)
 * 
 * @param (t_list**, t_list*)
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last_element = ft_lstlast(*lst);
	last_element -> next = new;
}
/*
 * A return statement without an expression shall only appear in a function 
 * whose return type is (void) .
*/
