/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 10:38:54 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:43:32 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 11:05:08 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:52:20 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * The tolower() function converts an upper-case letter to the 
 * corresponding lower-case letter.The argument must be representable as an 
 * unsigned char or the value of EOF. 
 * 
 * @param int
 * @return int
 */

int	ft_tolower(int n)
{
	unsigned char	i;

	i = (unsigned char)n;
	if (i >= 65 && i <= 90)
		return (i + 32);
	else
		return (i);
}
