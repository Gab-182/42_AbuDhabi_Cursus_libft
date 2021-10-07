/*
 * ft_strtrim(): trim beginning and end of string with the specified characters
 *
 * DESCRIPTION:
 * ============
 * Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string.
 */

# include <string.h>
# include <stdlib.h>
# include <stdio.h>

static	int check_for_set(char c, char const *set);

/*
* Note:
* =====
* remove this finction ft_substr() and include "libft.h"
*/
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
	while (n < strlen(s) && i < len)
	{
		sub_str[i] = ((char *)s)[n];
		n++;
		i++;
	}
	sub_str[i] = '\0';
	return sub_str;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;

	start = 0;
	if (!s1)	
		return (0);

	/* Check the begining of the string characters.*/
	while (s1[start] && check_for_set(s1[start], set))
		start++;
	
	/* Check the end of the string characters.
	 *
 	 * Note:
 	 * =====
 	 * Don't forgit to replace the strlen() function with ft_strlen() when you 
 	 * write youre project.
 	 */
	end = strlen(s1);
	while (end > start && check_for_set(s1[end - 1], set))
		end--;
	/*
	* Use the function ft_substr(), to return a new string
	* that end from the (start) point and have a max length
	* of (end - start).
	*/
	return (ft_substr(s1, start, (end-start)));
}

/*
 * check_for_set():
 * ----------------
 * To check each character from the string (s) if it is
 *  found in the set of characters (set).
 *  if the character is in the set return True (1),
 *  if not return False (0).
 */
static	int check_for_set(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	char *s;
	//char set[] = "";
	char set[] = "Ggho";
	//char set[] = {'G', 'h', 'g', 't', 'i'};
	s = "GGgghhggghhhhhGhaiabdohhh";
	printf("The result of ft_strtrim() is :%s\n", ft_strtrim(s, set));

	return EXIT_SUCCESS;
}
