#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && j + i < len)
		{
			j++;
		}
		if (j == strlen(needle))
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
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
