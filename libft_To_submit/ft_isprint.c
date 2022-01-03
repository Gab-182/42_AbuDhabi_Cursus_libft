/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:50:50 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:49:16 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * There are 95 printable ASCII characters, numbered 32 to 126 
 * The isprint() function tests for any printing character, including space.
 * The value of the argument must be representable as an unsigned char
 *  or the value of EOF.
 */

int	ft_isprint(int n)
{
	unsigned char	i;

	i = (unsigned char)n;
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}
