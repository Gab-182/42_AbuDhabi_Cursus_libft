/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:46:33 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 11:34:04 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * The isalnum() function tests for any character for which isalpha(3) or 
 * isdigit(3) is true.  The value of the argument must be  representable as an
 * unsigned char or the value of EOF.
 * 
 * @param int 
 * @return int 
 */

int	ft_isalnum(int n)
{
	unsigned char	i;

	i = (unsigned char)n;
	if ((i >= 48 && i <= 57) || (i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (1);
	return (0);
}
