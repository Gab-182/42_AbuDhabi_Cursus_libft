/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 18:50:08 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 23:56:00 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:54:53 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:33 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strdup.c
 * @brief
 * The strdup() function allocates sufficient memory for a copy of the string 
 * s1, does the copy, and returns a pointer to it.  The pointer may subsequently
 * be used as an argument to the function free(3).
 * 
 * @param (const char *s1)
 * @return (char *)
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	n;

	if (!s1)
		return (NULL);
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	n = 0;
	if (!s2)
		return (NULL);
	while (n < ft_strlen(s1))
	{
		s2[n] = ((char *)s1)[n];
		n++;
	}
	s2[n] = '\0';
	return (s2);
}
