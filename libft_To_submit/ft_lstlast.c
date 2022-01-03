/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 21:06:24 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:41:57 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:51:36 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:50:43 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstlast.c
 * @brief 
 * Returns the last element of the list.
 * @param (t_list *lst)
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
