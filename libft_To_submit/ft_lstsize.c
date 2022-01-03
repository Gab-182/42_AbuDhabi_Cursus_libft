/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 22:31:10 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:45:32 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:51:54 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:50:51 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstsize.c
 * @brief 
 * Counts the number of elements in a list.
 * @param (t_list *lst)
 * @return (int)
 *
 */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
