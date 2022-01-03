/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:43:31 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:49:54 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * memcpy(): is used to copy a specified number of bytes from one memory 
 * to another.
 *
 * memmove(): is used to copy a specified number of bytes from one memory 
 * to another or to overlap on same memory.
 * 
 * @param (void *dst, const void *src, size_t len)
 * @return (unsigned char *)
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_char;
	unsigned char	*src_char;

	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	if (!dst || !src)
		return (0);
	if (dst_char > src_char)
	{
		while (len)
		{
			dst_char[len - 1] = src_char[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst_char);
}

/*******************
 *  * Difference between memmove() and memcpy() is:
 * ---------------------------------------------
 * overlap can happen on memmove()
 * Whereas, memory overlap won’t happen in memcpy() 
 * and it should be done in non-destructive way.
 * 
 * 
 * Some Explanation:
 * -----------------
 * 	if (dst_char > src_char):
 * 		That mean that if (dst_char) starting after (src_char);
 * 		So there it ("could") be an overlapping, then we are going
 * 		to start copying from the end to the begining to Avoid corrubting
 * 		the (src) string.
 * 
 * 	if : dst > src ----->
 * 		
 * 		src = "H e l l o";
 *				 | | | |           
 * 		dst =  " e l l o";
 * 		if we start copying from the begining then:
 * 
 * 		in dst :
 * 		---------
 * 				.(e) will be (H)
 * 				.(l)  should be (e) but we allready changed (e) to (H)????
 * 		But if we start copying from the end to the begining of the string,
 * 		then, everything going to be ok.
*/