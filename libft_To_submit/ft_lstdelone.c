/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 21:23:58 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:41:01 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:50:12 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:50:34 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * Takes as a parameter an element and frees the memory of the element’s content 
 * using the function ’del’ given as a parameter and free the element.
 * @param ((t_list *lst, void (*del)(void*)))
 * 
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		del(lst -> content);
		free(lst);
	}
}
