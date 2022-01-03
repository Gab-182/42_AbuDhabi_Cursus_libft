/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 19:47:36 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:49:34 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:47:40 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:49:33 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The isascii() function tests for an ASCII character, which is any 
 * 		  character between 0 and octal 0177 inclusive.
 * @param (int)
 * @return int
 */

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
