/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/19 19:46:33 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 11:34:04 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:47:10 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:49:19 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
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
