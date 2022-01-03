/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 19:14:29 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 21:00:28 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 11:02:45 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:41 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * @brief
 * The strlcpy() and strlcat() functions copy and concatenate strings
 * respectively.
 * They are designed to be safer, more consistent, and less error prone 
 * replacements for strncpy(3) and strncat(3).
 *
 * Unlike those functions, strlcpy() and strlcat() take the full size of 
 * the buffer (not just the length) and guarantee to NUL-terminate the result 
 * (as long as size is larger than 0 or, 
 * in the case of strlcat(),as long as there is at least one byte free in dst).
 * Note that:
 * ----------
 * you should include a byte for the NUL in size.  
 * Also note that
 * --------------
 * strlcpy() and strlcat() only operate on true ``C'' strings.
 * This means that for strlcpy() src must be NUL-terminated.
 * For strlcat() both src and dst must be NUL-terminated.
 *
 * The strlcpy() function copies up to size - 1 characters from the NUL-
 * terminated string src to dst, NUL-terminating the result.
 * 
 * The strlcpy() and strlcat() functions return the total length of the string
 * they tried to create. For strlcpy() that means the length of src
 * 
 * @param (char *dst, const char *src, size_t size)
 * @return (size_t)
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (dst_size > 0)
	{
		while (i < dst_size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
