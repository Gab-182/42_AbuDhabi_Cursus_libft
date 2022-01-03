/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 10:38:30 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 11:36:02 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 11:02:56 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:46 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * The strlen() function computes the length of the string s.
 * 
 * @param const char *
 * @return size_t
 */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n ;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}
