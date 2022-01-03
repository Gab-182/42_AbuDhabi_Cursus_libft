/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:55:15 by gabdoush          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/22 21:12:43 by gabdoush         ###   ########.fr       */
=======
/*   Updated: 2021/11/02 09:51:38 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcat.c
 * @brief
* DESCRIPTION from bsd-man:
* ============
* strlcat() take the full size of the buffer (not just the length)
* and guarantee to NUL-terminate the result (strlcat(), as long as there is at 
* least one byte free in dst(size > 0)).
*
* Note:
* -----
* you should include a byte for the NUL in size.
* In strlcat() both src and dst must be NUL-terminated.
* 
* Returning value:
* ----------------
* strlcat() function return the total length of the string that it tried to 
* create, that means the initial length of dst plus the length of src.
* 
* Note:
* -----
* however, that if strlcat() traverses size characters without finding a
* NUL, the length of the string is considered to be size and the destination
* string will not be NUL-terminated.
*
* If dest lenght was bigger than the dstsize, the length of dest
* should be equal to dstsize and don't concatenate.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (!dst || !src)
		return (0);
	if (dst_len > dstsize)
		dst_len = dstsize;
	if (dstsize > 0 && dst_len < dstsize - 1)
	{
		while (dst_len + i < dstsize - 1 && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + ft_strlen(src));
}
