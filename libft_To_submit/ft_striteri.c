/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
<<<<<<<< HEAD:libft_To_submit/ft_striteri.c
/*   Created: 2021/12/22 18:52:52 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 18:52:53 by gabdoush         ###   ########.fr       */
========
/*   Created: 2021/11/01 11:04:44 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/01 11:04:45 by gabdoush         ###   ########.fr       */
>>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe:libft_To_submit/ft_strstr.c
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_striteri.c
 * @brief 
 * Applies the function f to each character of the
 * string passed as argument, and passing its index
 * as first argument. Each character is passed by
 * address to f to be modified if necessary
 * 
 * @param (char *s, void (*f)(unsigned int, char*))
 */

=======
/*   Created: 2021/11/03 15:45:35 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/03 15:54:27 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
