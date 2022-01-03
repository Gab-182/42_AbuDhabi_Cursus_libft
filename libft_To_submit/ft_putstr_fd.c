/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/20 12:12:41 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/20 12:21:05 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:53:44 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:17 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/******************************
 * DESCRIPTION For Write() function...
 * 
 * ssize_t write(int fildes, const void *buf, size_t nbyte);
 * 
 * The write() function attempts to write (nbyte) bytes from the buffer pointed 
 * to by (buf) to the file associated with the open file descriptor, (fildes).
 * 
 * If (nbyte) is 0, write() will return 0 and have no other results if the file 
 * is a regular file; otherwise, the results are unspecified.
 */
