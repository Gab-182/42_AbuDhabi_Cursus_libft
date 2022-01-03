/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:50:08 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 23:56:00 by gabdoush         ###   ########.fr       */
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
