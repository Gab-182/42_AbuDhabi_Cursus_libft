/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:11 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:46:13 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t n;
	n = 0;

	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
	{
		n++;
	}
	return (unsigned char)s1[n] - (unsigned char)s2[n];
}

int	main()
{
	char string_1[] = "1";
	char string_2[] = "2";

	printf("%d\n", ft_strcmp(string_1, string_2));
	printf("%d\n", strcmp(string_1, string_2));

	if (ft_strcmp(string_1, string_2) == strcmp(string_1, string_2))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return EXIT_SUCCESS;
}
