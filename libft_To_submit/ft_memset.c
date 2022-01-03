/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/20 12:00:53 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/20 12:02:45 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:53:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:06 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
*  The memset() function writes (len) bytes of value (c) (converted to an
*  unsigned char) to the string (dest).
*
* RETURN VALUES
* 	The memset() function returns its first argument.
*/
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
