/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:02:44 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/22 21:02:46 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	ft_bzero(void *dest, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = 0;
		i++;
	}
}

int	main()
{
	char ptr[50] = "Ghaiath$$$$$$$$$$$$$$$Abdoush";
	printf("Befor appling the bzero: %s\n", ptr);
	// replacing All chars after ptr[7] to 0
	bzero(ptr+7, 1);
	printf("After appling bzero: %s\n", ptr);


	char ptr2[50] = "Ghaiath$$$$$$$$$$$$$$$Abdoush";
	printf("Befor appling the memset: %s\n", ptr2);
	// replacing All chars after ptr[7] to 0
	memset(ptr2+7, 0, 1);
	printf("After appling memset: %s\n", ptr2);

	// So it is actually the same of memset function but :
	// int c = 0;
	//
	return EXIT_SUCCESS;
}
