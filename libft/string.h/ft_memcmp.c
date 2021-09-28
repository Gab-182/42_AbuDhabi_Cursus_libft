/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:48:33 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/23 22:15:25 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t n;
	unsigned char *s11;
	unsigned char *s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	n = 0;
	if (len == 0)
	{
		return (0);
	}
	while (n < len)
	{
		if (s11[n] == s22[n] && s11[n] != '\0' && s22[n] != '\0')
		{
			n++;
		}
		else
		{
			return s11[n] - s22[n];
		}
	}
	return (0);
}

int	main ()
{
	char str1[] = "Ghaiath";
	char str2[] = "ghaiath";

	printf("memcmp is :%d\n", memcmp(str1, str2, 5));
	printf("ft_memcmp is :%d\n", ft_memcmp(str1, str2, 5));

	return EXIT_SUCCESS;
}
