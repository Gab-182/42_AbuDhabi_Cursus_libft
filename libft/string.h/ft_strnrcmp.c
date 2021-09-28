/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:51 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:46:54 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>


size_t	ft_strlen(const char *s)
{
	size_t	n = 0;
	while(s[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	ft_strnrcmp(const char *s1, const char *s2, size_t len)
{	
	size_t i;
	size_t j;

	i = ft_strlen(s1) - 1;
	j = ft_strlen(s2) - 1;

	printf("len is %ld\n", len);
	printf("i is %ld\n", i);
	printf("j is %ld\n------------------\n", j);

	if (len == 0)
	{
		return (0);
	}

	printf("s1[i] is %c\n", s1[i]);
	printf("s2[j] is %c\n-------------------\n", s2[j]);

	while (len > 0)
	{
		if (s1[i] == s2[j])
		{
			i--;
			j--;
			len--;
		}
		else
		{
			return (unsigned char)s1[i] - (unsigned char)s2[j];
		}
	}
	return (0);
}

int	main()
{
	char string_1[] = "Ghaiath";
	char string_2[] = "Ghaiath";
	size_t len = 8;

	printf("%d\n", ft_strnrcmp(string_1, string_2, len));

	return EXIT_SUCCESS;
}
