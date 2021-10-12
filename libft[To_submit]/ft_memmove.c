/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:59:40 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/05 14:16:15 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_char;
	unsigned char	*src_char;

	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	i = 0;
	if (!dst || !src)
		return (0);
	if (dst_char > src_char)
	{
		while (i < len)
		{
			dst_char[len - 1 - i] = src_char[len - 1 - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst_char);
}
