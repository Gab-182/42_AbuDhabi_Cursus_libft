/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:47:17 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:49:43 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The isalpha() function tests for any character for which isupper(3)
 * 		  or islower(3) is true.  The value of the argu-
 * 		  ment must be representable as an unsigned char or the value of EOF.
 * 
 * @param (int) 
 * @return int 
 */

int	ft_isalpha(int n)
{
	unsigned char	i;

	i = (unsigned char)n;
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	return (0);
}
