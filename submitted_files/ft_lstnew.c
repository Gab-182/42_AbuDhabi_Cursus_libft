/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:28:29 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:43:44 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew.c
 * @brief 
 * Allocates (with malloc(3)) and returns a new element. 
 * The variable ’content’ is initialized with the value of the 
 * parameter ’content’. The variable ’next’ is initialized to NULL.
 * ---------------------------------------------------------------
 * So we will allocate memory for the new list, add the (content)
 * to it, If the memory allocation fails then we will return NULL.
 * @param (void *content)
 * @return (t_list	*)
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
