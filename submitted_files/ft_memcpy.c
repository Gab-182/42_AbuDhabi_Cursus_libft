/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:44:03 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 14:47:27 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcpy.c
 * @brief 
 * The memcpy() function copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined.
 * Applications in which dst and src might overlap should use memmove(3) instead.
 * The memcpy() function returns the original value of dst.
 * @param (void *dst, const void *src, size_t len)
 * @return (void *)
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
