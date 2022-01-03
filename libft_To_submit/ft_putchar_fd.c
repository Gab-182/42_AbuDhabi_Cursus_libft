/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/20 12:05:03 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/20 12:06:41 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:53:10 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:08 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/* Outputs the character ’c’ to the given file descriptor. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
