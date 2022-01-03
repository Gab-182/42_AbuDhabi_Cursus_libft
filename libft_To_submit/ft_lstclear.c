/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 21:23:41 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:38:34 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:50:01 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:50:32 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstclear.c
 * @brief 
 * Deletes and frees the given element and every successor of that element, 
 * using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to (NULL).
 * 
 * #1. The adress of a pointer to an element.
 * #2. The adress of the function used to delete the content of the element.
 * @param (t_list **lst, void (*del)(void*))
 * 
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_element;
	t_list	*next_element;

	current_element = *lst;
	if (*lst != NULL)
	{
		while (current_element != NULL)
		{
			next_element = current_element -> next;
			ft_lstdelone(current_element, del);
			current_element = next_element;
		}
	}
	*lst = NULL;
}
