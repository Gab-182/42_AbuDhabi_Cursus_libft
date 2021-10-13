/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:11:35 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/02 23:15:36 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int		j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j] && s2[j] != '\0' && i < len)
			{
				i++;
				j++;
			}
		}
		else
		{
			i++;
		}
		if (s2[j] == '\0')
			return ((char *)(s1 + i - j));
	}
	return (0);
}
