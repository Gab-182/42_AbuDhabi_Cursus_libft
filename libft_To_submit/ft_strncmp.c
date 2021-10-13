/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:43:08 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/02 20:43:10 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	n = 0;
	if (len == 0)
	{
		return (0);
	}
	while (n < len)
	{
		if (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
		{
			n++;
		}
		else
		{
			return ((unsigned char)s1[n] - (unsigned char)s2[n]);
		}
	}
	return (0);
}
