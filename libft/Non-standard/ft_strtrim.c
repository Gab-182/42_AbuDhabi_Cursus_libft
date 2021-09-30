/*
 * ft_strtrim(): trim beginning and end of string with the specified characters
 *
 * DESCRIPTION:
 * ============
 * Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char *new_str;
	size_t n;
	size_t j;
	size_t i;

	new_str = (char *)malloc(strlen(s1) + 1);
	n = 0;
	j = 0;
	i = 0;
	while (set[i] != '\0' && n < strlen(s1) - 1)
	{
		if (s1[0] == set[i])
		{
			n++;
			while (n < strlen(s1) - 1)
			{
				new_str[j] = s1[n];
				n++;
				j++;
			}
		}
		i++;
	}
	// That is means that we didn't found from the while loop any item 
	// from the set that is equal to the first item in the string.
	if (n == 0)
	{
		while (n < strlen(s1) - 1)
		{
			new_str[j] = s1[n];
			n++;
			j++;
		}
	}
	i = 0;
	// Checking for the last item in the string.
	while (set[i] != '\0')
	{
		if (s1[strlen(s1) - 1] == set[i])
		{
			n++;
			break;
		}
		i++;
	}
	// If the last item in the string not in (set), copy it to the new
	// string, and return the string.
	if(n == strlen(s1) - 1)
		{
			new_str[j] = s1[n];
			j++;
		}
	new_str[j] = '\0';
	return (new_str);
}

int	main()
{
	char *s;
	//char set[] = "";
	char set[] = {'G', 'h', 'g', 't', 'i'};
	s = "Ghaiath Abdoush";
	printf("The result of ft_strtrim() is :%s\n", ft_strtrim(s, set));

	return EXIT_SUCCESS;
}

/*
 * Note:
 * =====
 * Don't forgit to replace the strlen() function with ft_strlen() when you 
 * write youre project.
 */
