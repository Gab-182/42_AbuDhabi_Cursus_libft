/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:37 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:46:39 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t n;
	n = 0;

	if (len == 0)
	{
		return (0);
	}
	while (n < len)
	{
		if (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
		{
			n++;
		}
		else
		{
			return (unsigned char)s1[n] - (unsigned char)s2[n];
		}
	}
	return (0);
}

int	main()
{
	char string_1[] = "qwe";
	char string_2[] = "asd";

	printf("%d\n", ft_strncmp(string_1, string_2, 3));
	printf("%d\n", strncmp(string_1, string_2, 3));

	if (ft_strncmp(string_1, string_2, 3) == strncmp(string_1, string_2, 3))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return EXIT_SUCCESS;
}
