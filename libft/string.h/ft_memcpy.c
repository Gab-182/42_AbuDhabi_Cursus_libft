/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 22:16:24 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/23 08:09:46 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t i;
	
	// Check if dst and src are == to NULL.
	if (!dst && !src)
	{
		return (NULL);
	}

	// Need explanations Here???? WHY?

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	main()
{
	char dst[] = "Ghaiath";
	char src[] = "....";
	printf("The string befor mamcpy is: %s\n", dst);
	memcpy(dst, src, 4);
	printf("The string after mamcpy is: %s\n", dst);

	char dst1[] = "Ghaiath";
	char src1[] = "....";
	printf("The string befor ft_mamcpy is: %s\n", dst1);
	memcpy(dst1, src1, 4);
	printf("The string after ft_mamcpy is: %s\n", dst1);

	return EXIT_SUCCESS;
}

// very good link to read:
// https://stackoverflow.com/questions/43088070/meaning-of-overlapping-when-using-memcpy
