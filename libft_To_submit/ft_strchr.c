/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:32:43 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/04 01:53:50 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
		n--;
	}
	return (0);
}
