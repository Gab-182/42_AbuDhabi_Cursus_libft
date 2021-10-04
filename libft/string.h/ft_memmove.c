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

	if (!dst && !src)
	{
		return (0);
	}
	// check if the two strings overlabing.
	if (dst > src)
	{
		while (i < len)
		{
			/*
			 * Here we start coping from the last element of the string (src)
			 * to the first one.
			 */
			dst_char[len - 1 - i] = src_char[len - 1 - i];
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
	char dest[] = "old_string";
	const char src[] = "new_string";
	printf("Before memmove:\ndest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove\ndest = %s, src = %s\n\n", dest, src);

	char dest1[] = "old_string";
	const char src1[] = "new_string";
	printf("Before ft_memmove\ndest = %s, src = %s\n", dest1, src1);
	ft_memmove(dest1, src1, 9);
	printf("After ft_memmove\ndest = %s, src = %s\n\n\n", dest1, src1);

	// 2:
	char dst2[] = "Ghaiath";
	char src2[] = ".......";
	size_t len = 4;
	printf("Befor memmove() : %s\n", dst2);
	memmove(dst2, src2, len);
	printf("After memmove() : %s\n\n", dst2);

	char dst3[] = "Ghaiath";
	char src3[] = ".......";
	size_t len1 = 4;
	printf("Befor ft_memmove() : %s\n", dst3);
	memmove(dst3, src3, len1);
	printf("After ft_memmove() : %s\n", dst3);

	return EXIT_SUCCESS;
}

/*NOTE:
 *=====
 * Don't forget to replace memcpy with ft_memcpy() ,and #include libft.h
 * 
 * It will be alot easier to create a *temp pointer, but using malloc()
 * is forbiden here.
 * 
 * Very useful link to understand the defference:
 * ================================================
 * 
 * https://www.geeksforgeeks.org/memmove-in-cc/  
 *
 * https://www.geeksforgeeks.org/write-memcpy/ 
 * 
 * https://aticleworld.com/memmove-function-implementation-in-c/
 */
