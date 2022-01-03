/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/22 10:39:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 11:57:29 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 11:05:18 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:52:23 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The toupper() function converts a lower-case letter to the 
  corresponding upper-case letter.  The argument must be representable as an 
  unsigned char or the value of EOF.
 
 * @param int
 * @return int 
 */

int	ft_toupper(int n)
{
	unsigned char	i;

	i = (unsigned char)n;
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	else
		return (i);
}
