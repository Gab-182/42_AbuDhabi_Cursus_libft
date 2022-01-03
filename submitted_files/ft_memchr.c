/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:32:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:45:23 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memchr.c
 * @brief 
 * The memchr() function locates the first occurrence of c 
 * (converted to an unsigned char) in string s.
 * The memchr() function returns a pointer to the byte located, or NULL if no 
 * such byte exists within n bytes.
 * @param (const void *b, int c, size_t len)
 */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)b == (unsigned char)c)
		{
			return ((void *)b);
		}
		i++;
		b++;
	}
	return (0);
}
