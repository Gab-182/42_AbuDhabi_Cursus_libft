/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:47:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:47:02 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
	{
		return (char *)haystack;
	}
	size_t i;
	int j;
	
	i = 0;

	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && needle[j] != '\0' && i < len)
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
	char main_string[] = "Ghaith AntAntiun Ghaith Abdoush";
	char string[] = "th";
	size_t len = 15;
	printf("%s\n", ft_strnstr(main_string, string, len));
    
	return EXIT_SUCCESS;
}
