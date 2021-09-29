/*
 * ft_substr(): extract substring from string.
 *
 * DESCRIPTION:
 * ============
 * Allocates (with malloc(3)) and returns a substring
 * from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 */

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t n;
	size_t i;
	char *sub_str;


	n = start;
	i = 0;
	sub_str = (char *)malloc(len + 1);

	if (!sub_str)
	{
		return (NULL);
	}
	/*
	 * I did not wrote (i <= len):
	 * cause len is the max size of the new string, not the max length,
	 * so the '\0' will be included.
	 */
	while (n < strlen(s) && i < len)
	{
		sub_str[i] = ((char *)s)[n];
		n++;
		i++;
	}
	sub_str[i] = '\0';
	return sub_str;
}

int	main()
{
	const char *s;
	char *sub_str;

	s = "ABCDEFGHIJKLMNO";
	sub_str = ft_substr(s, 7, 6);

	printf("%lu\n", strlen(s));
	printf("%s\n", sub_str);

	return EXIT_SUCCESS;
}

/*
 * Note:
 * =====
 * do not forget to replace strlen(s1) with ft_strlen(s1), and include the
 * heder for that:
 * # include "libft.h"
 */

