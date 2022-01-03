/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:04:25 by gabdoush          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/22 23:59:19 by gabdoush         ###   ########.fr       */
=======
/*   Updated: 2021/11/02 09:52:06 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strnstr.c
 * @brief 
 * The strnstr() function locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more than len characters are
 * searched.
 * 
 * If needle is an empty string, haystack is returned; if needle occurs nowhere
 * in haystack, NULL is returned; otherwise a pointer to the first character of
 * the first occurrence of needle is returned.
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && j + i < len)
<<<<<<< HEAD
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
=======
		{
			j++;
		}
		if (j == ft_strlen(needle))
		{
			return ((char *)&haystack[i]);
		}
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
		i++;
	}
	return (NULL);
}
