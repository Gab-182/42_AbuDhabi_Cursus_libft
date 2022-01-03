/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:00:53 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/20 12:02:45 by gabdoush         ###   ########.fr       */
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
