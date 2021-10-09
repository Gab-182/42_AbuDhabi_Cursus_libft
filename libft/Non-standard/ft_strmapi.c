/**
 * ft_strmapi():
 * -------------
 * Applies the function ’f’ to each character of the string ’s’ 
 * to create a new string (with malloc(3)) resulting from successive 
 * applications of ’f’.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		unsigned int  i;
		char	*str_copy;

		i = 0;

		/* 
		 * Allocate the memory for str_copy and check if the 
		 * allocation happened
		 */
		str_copy = (char *)malloc(strlen(s) + 1);
		if (!str_copy || !s || !f)
		{
			return (NULL);
		}
		/* Apply and copy the function (f) to each memory location in str_copy*/
		while (s[i] != '\0')
		{
			str_copy[i] = f(i, s[i]);
			i++;
		}
		str_copy[i] = '\0';
		return (str_copy);
}

/*
 * NOTE:
 * =====
 * The following example is from: https://velog.io/@jungjaedev/ftstrmapi
 *💾Example:
 */

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}