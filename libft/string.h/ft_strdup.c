/*
 * LIBRARY: <string.h>
 * ft_strdup(): save a copy of a string (with malloc).
 *
 * DESCRIPTION:
 * ============
 * The  strdup(): returns a pointer to a new string which is a duplicate of the
 * string s.
 * Memory for the new string is obtained with malloc().
 * It returns NULL if insufficient memory  was  available.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strdup(const char *s1)
{
	char *s2;
	size_t n;
	
	/* 
	 * strlen(s1) + 1 :
	 * The 1 that i added is for the Null.
	 * for more clarification, you can visualize the process with
	 * https://pythontutor.com/c.html#mode=edit
	 */ 
	s2 = (char *)malloc(strlen(s1) + 1);
	n = 0;

	/*
	 * It returns (NULL) if insufficient memory was available. so it 
	 * basically i'm checking that the memory was created properly:
	 * (!((char *)malloc(strlen(s1) + 1)))
	 */
	if (!s2)
	{
		return (NULL);
	}
	while (n < strlen(s1))
	{
		s2[n] = ((char *)s1)[n];
		n++;
	}
	s2[n] = '\0';
	return s2;
}

int	main()
{
	const char *s1;
	char *s2;

	s1 = "123456789";
	s2 = ft_strdup(s1);

	printf("%lu\n", strlen(s1));
	printf("%s\n", s2);

	return EXIT_SUCCESS;
}

/*
 * Note:
 * =====
 * do not forget to replace strlen(s1) with ft_strlen(s1), and include the
 * heder for that:
 * # include "libft.h"
 */
