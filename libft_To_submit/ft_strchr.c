/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 14:57:48 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:59:21 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:54:18 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:25 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strchr.c
 * @brief 
 * The strchr() function locates the first occurrence of c (converted to a char)
 * in the string pointed to by s.  The terminating null character is considered
 * to be part of the string; therefore if c is `\0', the functions locate the 
 * terminating `\0'.
 * @param (const char *s, int c)
 * @return (char *)
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		n--;
	}
	return (0);
}
