/*
 * ft_strjoin(): concatenate two strings into a new string (with malloc).
 *
 * DESCRIPTION:
 * ============
 * Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 * return a pointer to the new string.
 */

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	size_t new_str_len;
	char *new_str;

	i = 0;
	j = 0;
	new_str_len = strlen(s1) + strlen(s2);
	// we added (1) for '\0'.
	new_str = (char *)malloc(new_str_len + 1);

	if (!s1 || !s2 || !new_str)
	{
		return (0);
	}
	// Adding the first string to new_str.
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	//Adding the second string to new_str.
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	// ending the new string with '\0'.
	new_str[i] = '\0';
	return (new_str);
}

int	main()
{
	char const *s1;
	char const *s2;

	s1 = "12345";
	s2 = "67890";

	printf("The result from st_strjoin() is : %s\n", ft_strjoin(s1, s2));

	return EXIT_SUCCESS;
}

/*
 * Note:
 * =====
 * Don't forget to replace strlen() with ft_strlen() and include the header
 * libft.h
 */
