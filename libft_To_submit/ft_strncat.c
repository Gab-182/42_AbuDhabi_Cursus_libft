/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:40:56 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/02 20:41:17 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s, const char *append, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (j < n && append[j] != '\0')
	{
		s[i] = append[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
