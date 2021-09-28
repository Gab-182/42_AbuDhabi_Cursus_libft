/*
 * LIBRARY: <string.h>
 * SYNOPSIS: concatenate strings (s2 into s1, size-bounded)
 *
 * DESCRIPTION:
 *=============
 * The strcat() and strncat() functions append a copy of the null-
 * terminated string s2 to the end of the null-terminated string s1, then
 * add a terminating `\0'.  The string s1 must have sufficient space to hold
 * the result.
 * The strncat() function appends not more than n characters from s2, and
 * then adds a terminating `\0'.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strncat(char *s, const char *append, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (j < n && append[j] != '\0')
	{
		s[i] = append[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

int	main()
{
	char s[50] = "Ghaiath ";
	char append[50] = "Abdoush ";
	size_t n;
	n = 3;

	printf("[1]\n\ndst, append befor ft_strncat is :%s, %s\n", s, append);
	printf("ft_strncat is :%s\n", ft_strncat(s, append, n));
	printf("dst, append after ft_strncat is :%s, %s\n\n\n", s, append);

/*
 * NOTE:
 * =====
 * If you try to redo the whole process again like that,
 * you need to determain the size of the dst and src strings,
 * for example:
 * dst[50]; 
 * src[50];
 * Or.... there will be a segmentation fault.
 */

	printf("[2]\n\ndst, append befor ft_strncat is :%s, %s\n", s, append);
	printf("ft_strncat is :%s\n", ft_strncat(s, append, n));
	printf("dst, append after ft_strncat is :%s, %s\n", s, append);

	return EXIT_SUCCESS;
}
