/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 21:01:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 21:04:32 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 11:03:29 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:52 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
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
