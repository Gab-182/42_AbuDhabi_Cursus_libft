/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:55:15 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 18:59:40 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * ft_strtrim(): trim beginning and end of string with the specified characters
 * Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string.
 * 
 * @param (char const *s1, char const *set)
 * @return (char *)
 */

#include "libft.h"

static int	check_for_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (0);
	while (s1[start] && check_for_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_for_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, (end - start)));
}

/*
 * check_for_set():
 * ----------------
 * To check each character from the string (s) if it is
 *  found in the set of characters (set).
 *  if the character is in the set return True (1),
 *  if not return False (0).
 */
static int	check_for_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
