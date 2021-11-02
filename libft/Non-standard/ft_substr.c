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

/**
 * the lenghth (len) is starting from 1, not from 0.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;

/***
 * this if statement to make sure that :
 * - we dont make (start) bigger than the length of the string(s).
 * - make sure that the length of the substring (sub_str)
*/
	if (start > strlen(s) || len <= 0)
		return (strdup(""));
/**
 * Here we are checking if the length of (sub_string) will be more 
 * the length of main string(s), and if so :
 * - use calloc to allocate a specified amount of memory which is (len +1) 
 *   and then initialize it to zero.
*/
	if ((start + len) > strlen(s))
	{
		sub_str = (char *) calloc(strlen(s) - start + 1, sizeof(char));
		if (!sub_str)
			return (NULL);
/**
 * - then copy the main string (s) from the point (start) to the end of the (s).
 *     # (s + start)             ----> pointer to the start of (sub_str)
 *     # (strlen(s) - start + 1) ----> cause the strlcpy() copy to the (size -1).
 * 
*/
		strlcpy(sub_str, s + start, strlen(s) - start + 1);
		return (sub_str);
	}
	sub_str = (char *) calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}

int	main()
{
	const char *s;
	char *sub_str;

	s = "Ghaiath...Abdoush";
	sub_str = ft_substr(s, 7, 16);

	printf("%lu\n", strlen(s));
	printf("%s\n", sub_str);

	return EXIT_SUCCESS;
}
