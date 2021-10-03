/*
 * SYNOPSIS: #include <string.h>
 *
 * The strchr() function locates the first occurrence of c (converted to a char)
 * in the string pointed to by s.
 * 
 * Return value:
 * =============
 * return a pointer to the located character, or NULL if the character does 
 * not appear in the string.
 */

# include <stdio.h>
# include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = strlen(s);
	while (n >= 0)
	{
		if (*s == (char)c)
		{
			// cause the string is const char we need to convert it.
			return ((char *)s);
		}
		s++;
		n--;
	}
	return (0);
}

int	main()
{
	char string[] = "Ghaiath Antoun Abdoush";
	printf("%s\n", ft_strchr(string, 'h'));
	return (0);
}

/*
 * Note
 * =====
 * Don't forget to replace strlen(s) with ft_strlen, and include 
 * the header libft.h
 */