/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:47:14 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:47:15 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


char    *ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
	{
		return (char *)haystack;
	}
	int i;
	int j;
	
	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				i++;
				j++;
			}
		}
		else
		{
			i++;
		}

		if (needle[j] == '\0')
		{
			return (char *)(haystack + i - j);
		}
	}
	return (0);
}

int    main()
{
	char main_string[] = "Ghaith AntAntiun Ghaith Abdoushj";
	char string[] = "ji";
	printf("%s\n", ft_strstr(main_string, string));
    
	printf("%s\n", strstr(main_string, string));
	if (strstr(main_string, string) == ft_strstr(main_string, string))
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

	return EXIT_SUCCESS;
}
