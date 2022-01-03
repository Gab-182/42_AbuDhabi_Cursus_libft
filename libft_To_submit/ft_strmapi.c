/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:01:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 21:04:32 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * ft_strmapi(): Applies the function ’f’ to each character of the string ’s’ 
 * to create a new string (with malloc(3)) resulting from successive 
 * applications of ’f’.
 * 
 * @param (char const *s, char (*f)(unsigned int, char))
 * @return (char *)
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_copy;

	i = 0;
	str_copy = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!s || !str_copy)
		return (NULL);
	while (s[i] != '\0')
	{
		str_copy[i] = f(i, s[i]);
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
