/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:09:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/02 23:10:18 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnrcmp(const char *s1, const char *s2, size_t len)
{	
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = ft_strlen(s2) - 1;
	if (len == 0)
	{
		return (0);
	}
	while (len > 0)
	{
		if (s1[i] == s2[j])
		{
			i--;
			j--;
			len--;
		}
		else
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[j]);
		}
	}
	return (0);
}
