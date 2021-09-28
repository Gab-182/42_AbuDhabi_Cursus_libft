/*
 * LIBRARY: <string.h>
 *
 * SYNOPSIS: concatenate strings (s2 into s1)
 *
 * DESCRIPTION:
 * ============
 * The strcat() and strncat() functions append a copy of the null-
 * terminated string s2 to the end of the null-terminated string s1, then
 * add a terminating `\0'.  The string s1 must have sufficient space to hold
 * the result.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strcat(char *s, const char *append)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (append[j] != '\0')
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

	printf("[1]\n\ndst befor ft_strcat is :%s\n", s);
	printf("ft_strcat is :%s\n", ft_strcat(s, append));
	printf("dst after ft_strcat is :%s\n\n\n", s);

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

	printf("[2]\n\ndst befor ft_strcat is :%s\n", s);
	printf("ft_strcat is :%s\n", ft_strcat(s, append));
	printf("dst after ft_strcat is :%s\n", s);

	return EXIT_SUCCESS;
}
