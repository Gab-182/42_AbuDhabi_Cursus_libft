/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:17 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:46:19 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dst, const char *src)
{
	int n;

	n = 0;
	while (src[n] != '\0')
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (dst);
}

int main()
{
	char dst[] = "";
	const char src[] = "Ghaiath Abdoush";

	printf("ft_strcpy is :\n%s\n--------\n", ft_strcpy(dst, src));
	printf("strcpy is :\n%s\n--------\n", strcpy(dst, src));

	if (ft_strcpy(dst, src) == strcpy(dst, src))
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return EXIT_SUCCESS;
}
