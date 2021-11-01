/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:49:40 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/01 10:49:42 by gabdoush         ###   ########.fr       */
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
