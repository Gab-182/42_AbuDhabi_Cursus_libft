/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:50:10 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:57:14 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strrchr.c
 * @brief 
 * The strrchr() function locates the last occurrence of c (converted to a char)
 * in the string pointed to by s.  The terminating null character is considered
 * to be part of the string; therefore if c is `\0', the functions locate the 
 * terminating `\0'.
 * @param (const char *s, int c)
 * @return (char *)
 */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (char)c)
			return ((char *)&s[n]);
		n--;
	}
	return (0);
}
