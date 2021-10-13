/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:06:14 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/12 15:09:21 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
