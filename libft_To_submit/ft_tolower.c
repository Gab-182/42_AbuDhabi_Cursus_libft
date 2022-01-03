/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:38:54 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:43:32 by gabdoush         ###   ########.fr       */
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
