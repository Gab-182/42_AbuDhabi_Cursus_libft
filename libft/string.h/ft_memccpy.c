/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:26:10 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/23 08:09:57 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void 	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t i;

	// Check if dst and src are == to NULL.
	if(!dst && !src)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		if (((const unsigned char *)src)[i] == c)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			return (dst);
		}
		else
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
		i++;
	}
	return (dst);
}

int	main()
{
	char dst[] = ".......";
	char src[] = "Ghaiath";
	printf("The string befor memccpy : %s\n", dst);
	memccpy(dst, src, 't', 7);
	printf("The string after: %s\n", dst);

	char dst1[] = ".......";
	char src1[] = "Ghaiath";
	printf("The string befor ft_memccpy : %s\n", dst1);
	ft_memccpy(dst1, src1, 't', 7);
	printf("The string after: %s\n", dst1);

	return EXIT_SUCCESS;
}
