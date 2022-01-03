/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 21:15:07 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:48:06 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:49:50 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:50:30 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_front.c
 * @brief 
 * Adds the element ’new’ at the beginning of the list (lst).
 * We need to change the (next) of the (new) to keeps the address
 * of the pointer that point to the head of the list. Then the pointer
 * keeps the address of the new element.
 * 
 * @param (t_list **, t_list *)
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}
