/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:04:56 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 21:10:00 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strncmp.c
 * @brief 
 * The strncmp() function compares not more than n characters.  Because
 * strncmp() is designed for comparing strings rather than binary data,
 * characters that appear after a `\0' character are not compared.
 * 
 * strncmp() functions return an integer greater than, equal
 * to, or less than 0, according as the string s1 is greater than, equal to, 
 * or less than the string s2.  The comparison is done using unsigned characters
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	n = 0;
	if (len == 0)
		return (0);
	while (n < len)
	{
		if ((unsigned char)s1[n] == (unsigned char)s2[n]
			&& (unsigned char)s1[n] != '\0' && (unsigned char)s2[n] != '\0')
			n++;
		else
			return ((unsigned char)s1[n] - (unsigned char)s2[n]);
	}
	return (0);
}
