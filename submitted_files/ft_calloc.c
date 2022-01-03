/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:40:57 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 11:40:29 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief
 * The calloc() function allocates memory for an array of (count) elements
 * of (size) bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * Block of memory would be allocated: malloc(count * size);
 * If (count) or (size) is 0, then calloc() returns NULL.
 * 
 * @param 
 * (size_t count, size_t size)
 * 
 * @return (void *)
 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

/*
 * void( *):
 * since the ft_calloc() function should return a void result.
 */