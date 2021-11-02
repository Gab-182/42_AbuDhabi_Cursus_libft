/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:05:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/01 20:26:35 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	size_t	i;
	char	*sub_str;

	if (! s)
		return (NULL);
	n = start;
	i = 0;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (NULL);
	while (n < ft_strlen(s) && i < len)
	{
		sub_str[i] = ((char *)s)[n];
		n++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
