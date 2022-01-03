/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:30:32 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:44:25 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** 
 * @brief The bzero() function writes n zeroed bytes to the string s. 
 * If n is zero, bzero() does nothing.The  bzero(): erases the data in 
 * the n bytes of the memory starting at the location pointed to by s, by 
 * writing zeros (bytes containing '\0') to that area.
 * If (n) is zero, bzero() does nothing.
 * 
 * @param (void*, size_t)
 */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = 0;
		i++;
	}
}
