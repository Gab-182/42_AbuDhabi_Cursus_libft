/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 21:08:39 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:41:26 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:50:24 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:50:40 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstiter.c
 * @brief 
 * Iterates the list ’lst’ and applies the function ’f’ to the content of 
 * each element.
 * 
 * #1. The adress of a pointer to an element. 
 * #2. The adress of the function used to iterate on the list.
 * @param (t_list *lst, void (*f)(void *))
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		while (lst)
		{
			f(lst -> content);
			lst = lst -> next;
		}
	}
}
