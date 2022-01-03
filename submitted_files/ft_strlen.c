/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:38:30 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 11:36:02 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * The strlen() function computes the length of the string s.
 * 
 * @param const char *
 * @return size_t
 */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n ;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}
