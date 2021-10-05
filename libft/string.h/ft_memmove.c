/*
 * Note:
 * ====
 * memcpy(): is used to copy a specified number of bytes from one memory 
 * to another.
 *
 * memmove(): is used to copy a specified number of bytes from one memory 
 * to another or to overlap on same memory.
 *
 * Difference between memmove() and memcpy() is:
 * ---------------------------------------------
 * overlap can happen on memmove()
 * Whereas, memory overlap won’t happen in memcpy() 
 * and it should be done in non-destructive way.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *dst_char;
	unsigned char *src_char;

	/* 
	 * here we are typecasting (src) and (dst) addresses to (unsigned char *)
	 */
	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	i = 0;

	if (!dst || !src)
	{
		return (0);
	}

	/*
	 * Check if the two strings overlabing.
	 * ======================================
	 * If two strings end at the same place they by definition overlapped
	 * they share the same null terminator. Either both strings are identical
	 * or one is a substring of the other.
	 */
	if (dst_char > src_char)
	{
		while (i < len)
		{
			/*
			 * Here we start coping from the last element of the string (src)
			 * to the first one.
			 */
			dst_char[len -1 - i] = src_char[len - 1 - i];
			i++;
		}
	}
	else
	{
		memcpy(dst, src, len);
	}
	return (dst_char);
}


int main()
{
	// 1:
	char dest[] = "string";
	const char src[] = "new....string";
	printf("Before memmove:\ndest = %s, src = %s\n", dest, src);
	memmove(dest, src, 4);
	printf("After memmove\ndest = %s, src = %s\n\n", dest, src);

	char dest1[] = "string";
	const char src1[] = "new....string";
	printf("Before ft_memmove\ndest = %s, src = %s\n", dest1, src1);
	ft_memmove(dest1, src1, 4);
	printf("After ft_memmove\ndest = %s, src = %s\n\n\n", dest1, src1);

	// 2:
	
	char src2[] = "lorem ipsum dolor sit amet";
	char *dst2 = src2 + 1;
	size_t len = 5;
	printf("Befor memmove() : %s\n", dst2);
	memmove(dst2, src2, len);
	printf("After memmove() : %s\n\n", dst2);

	
	char src3[] = "lorem ipsum dolor sit amet";
	char *dst3 = src3 + 1;
	size_t len1 = 5;
	printf("Befor ft_memmove() : %s\n", dst3);
	memmove(dst3, src3, len1);
	printf("After ft_memmove() : %s\n", dst3);

	return EXIT_SUCCESS;
}

/*NOTES:
 *=====
 * Don't forget to replace memcpy, strlen() with:
 * ft_memcpy(), ft_strlen() ,and also #include "libft.h"
 * 
 * It will be alot easier to create a *temp pointer, but using malloc()
 * is forbiden here.
 * 
 * Very useful links that helped me to understand memmove() :
 * ==========================================================
 * 
 * https://www.geeksforgeeks.org/memmove-in-cc/  
 * https://www.geeksforgeeks.org/write-memcpy/ 
 * https://aticleworld.com/memmove-function-implementation-in-c/
 * https://stackoverflow.com/questions/4023320/how-to-implement-memmove-in-standard-c-without-an-intermediate-copy?answertab=votes#tab-top
 * 
 * very useful link to understand overlabbing:
 * ===========================================
 * 
 * https://stackoverflow.com/questions/17559977/is-this-a-correct-and-portable-way-of-checking-if-2-c-strings-overlap-in-memory
 */
