/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:42 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/24 22:22:41 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t n;

	n = 0;

	while (src[n] != '\0' && n < len)
	{
		dst[n] = src[n];
		n++;
	}
	while (n < len)
	{
		dst[n] = '\0';
		n++;
	}
	return (dst);
}

int main()
{
	char dst[] = "";
	const char src[] = "Ghaiath";
	size_t len;
	len = 1;
	printf("ft_strncpy is :\n%s\n--------\n", ft_strncpy(dst, src, len));
	
	char dst1[] = "";
	const char src1[] = "Ghaiath";
	size_t len1;
	len1 = 1;
	printf("strncpy is :\n%s\n--------\n", strncpy(dst1, src1, len1));

	return EXIT_SUCCESS;
}
