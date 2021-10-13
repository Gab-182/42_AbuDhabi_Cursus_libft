/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:08:40 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/11 19:51:55 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (!(*lst))
	{
		*lst = new;
	}
	last_element = *lst;
	while (last_element -> next)
	{
		last_element = last_element -> next;
	}
	last_element -> next = new;
	new -> next = NULL;
}
