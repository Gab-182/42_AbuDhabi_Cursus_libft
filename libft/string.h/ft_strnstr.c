/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:16:52 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/01 15:28:02 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t j;

	if (*needle == '\0')
		return ((char *)haystack);
	j = 0;
	while (haystack && len--)
	{
		if (*haystack == needle[j])
		{
			while (*haystack == needle[j])
			{
				haystack++;
				j++;
			}
		}
		else
		{
			haystack++;
			j = 0;
		}

		if (needle[j] == '\0')
		{
			return ((char *)(haystack - j));
		}
	}
	return (0);
}

int    main()
{
	char main_string[] = "Ghaith AntAntiun Ghaith Abdoush";
	char string[] = "GGAbd";
	size_t len = 15;
	printf("%s\n", ft_strnstr(main_string, string, len));
	
if (strnstr(main_string, string, len) == ft_strnstr(main_string, string, len))
{
	printf("%s\n", "TRUE");
}
else
{
	printf("%s", "FALSE");
}
	return EXIT_SUCCESS;
}
