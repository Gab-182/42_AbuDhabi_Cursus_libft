/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 19:30:32 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:44:25 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/10/01 20:58:48 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:46:07 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
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
