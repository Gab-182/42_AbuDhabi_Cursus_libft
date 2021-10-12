/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 22:16:29 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/04 23:08:23 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t			n;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	n = 0;
	if (len == 0)
	{
		return (0);
	}
	while (n < len)
	{
		if (s11[n] == s22[n] && s11[n] != '\0' && s22[n] != '\0')
		{
			n++;
		}
		else
		{
			return (s11[n] - s22[n]);
		}
	}
	return (0);
}
