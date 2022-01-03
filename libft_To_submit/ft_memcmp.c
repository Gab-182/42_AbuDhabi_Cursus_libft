/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:37:04 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:46:31 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * The memcmp() function compares byte string s1 against byte string s2.  
 * Both strings are assumed to be (len) bytes long.
 * The memcmp() function returns zero if the two strings are identical, 
 * otherwise: 
 * returns the difference between the first two differing bytes 
 * (treated as unsigned char values) Zero-length strings are always identical.
 * @param (const void *s1, const void *s2, size_t len)
 * @return int
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t			n;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	n = 0;
	if (len == 0)
		return (0);
	while (len--)
	{
		if (s11[n] != s22[n])
			return (s11[n] - s22[n]);
		n++;
	}
	return (0);
}
