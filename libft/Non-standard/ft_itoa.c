/*
 * ft_itoa(): convert integer to ASCII string
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument, Negative numbers must be handled.
 * 
 * If the allocation fails the function will return NULL.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t	ft_intlen(int num);

char *ft_itoa(int n)
{
    char			*str;
	size_t			intlen;
	unsigned int	num_copy;

    intlen = ft_intlen(n);
	num_copy = n;

    if (n < 0)
    {
        /* 
         * Since num_copy is (unsigned int) so it hold only positive
         * number, So for example :
         * if n  = -2
         * then num_copy will be a garbege value, so when we multiply
         * (n * -1), then num_copy will take the value (2).
         */
        num_copy = -1 * n;
        /* 
         * Then we increase intlen to make space in the memory for 
         * the (-) sign
         */
        intlen++;
    }

    str = (char *)malloc(sizeof(char) * intlen + 1);

    /* Don't forget to replace bzero with ft_bzero() */
	bzero(str, intlen + 1);
    if (!str)
        return (NULL);

    intlen--;
    str[intlen] = num_copy % 10 + '0';
    intlen--;

    num_copy = num_copy / 10;
    while (num_copy)
    {
        str[intlen] = num_copy % 10 + '0';
        num_copy = num_copy / 10;
        intlen--;
    }
    /* If the integer number is negative, put (-) at the first 
     * memory location (str[0])
     */
    if (n < 0)
        *(str + 0) = '-';

    return (str);
}

/* This function is to get the length of the integer (n) */
static size_t ft_intlen(int num)
{
    size_t i;

    /* 
     * (i = 1) : if the number < 10.
     * that mean there is just one number in (n).
     */
	i = 1;
	num = num / 10;
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

int main()
{
    int num;
    num = -123456789;
    printf("%s\n", ft_itoa(num));
    return EXIT_SUCCESS;
}
