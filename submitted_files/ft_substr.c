/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:03:33 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 19:09:04 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * @brief 
 * ft_substr(): extract substring from string.
 * Allocates (with malloc(3)) and returns a substring
 * from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 * 
 * @param (char const *s, unsigned int start, size_t len)
 * @return (char *)
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;

	if (start > ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
	{
		sub_str = (char *) ft_calloc(ft_strlen(s) - start + 1, sizeof(char));
		if (!sub_str)
			return (NULL);
		ft_strlcpy(sub_str, s + start, ft_strlen(s) - start + 1);
		return (sub_str);
	}
	sub_str = (char *) ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
