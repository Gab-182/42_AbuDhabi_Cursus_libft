/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:53:05 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 18:54:12 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * ft_strjoin(): concatenate two strings into a new string (with malloc).
 * Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 * return a pointer to the new string.
 * 
 * @param (char const *s1, char const *s2)
 * @return (char *)
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	new_str_len;
	char	*new_str;

	i = 0;
	j = 0;
	new_str_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(new_str_len + 1);
	if (!s1 || !s2 || !new_str)
		return (0);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
