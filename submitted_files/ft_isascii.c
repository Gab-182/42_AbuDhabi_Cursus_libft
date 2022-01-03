/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:47:36 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:49:34 by gabdoush         ###   ########.fr       */
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
