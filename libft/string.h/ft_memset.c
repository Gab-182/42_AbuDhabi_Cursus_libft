/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:21:06 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/22 20:51:19 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memset(void *dest,	int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

int	main()
{
	char ptr[50] = "Ghaiath$$$$$$$$$$$$$$$Abdoush";

	printf("Befor appling the memset: %s\n", ptr);

	// replacing 15 char after ptr[6] to '.'
	memset(ptr+7, '.', 15);

	printf("After appling memset: %s\n", ptr);

		
	if (ft_memset(ptr, '.', 10) == memset(ptr, '.', 10))
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return EXIT_SUCCESS;
}
