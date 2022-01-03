/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:34:05 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:42:41 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstmap.c
 * @brief 
 * Iterates the list ’lst’ and applies the function ’f’ to the content of each 
 * element.
 * Creates a new list resulting of the successive applications of the ’f’. 
 * The ’del’ function is used to delete the content of an element if needed.
 * NULL if the allocation fails.
 * 
 * #1. The adress of a pointer to an element. 
 * #2. The adress of the function used to iterate on the list. 
 * #3. The adress of the function used to delete the content of an element if 
 * needed.
 * @param (t_list *lst, void *(*f)(void *), void (*del)(void *))
 * @return (t_list *)
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_element;

	new_lst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		temp_element = ft_lstnew(f(lst -> content));
		if (!temp_element)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp_element);
		lst = lst->next;
	}
	return (new_lst);
}
