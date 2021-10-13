/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:25:19 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/09 23:55:55 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_copy;

	i = 0;
	str_copy = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!s || !str_copy || !f)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		str_copy[i] = f(i, s[i]);
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
