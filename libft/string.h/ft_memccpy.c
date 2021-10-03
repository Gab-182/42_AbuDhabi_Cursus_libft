/*
 * #include <string.h>
 *
 * ft_memccpy(): copy string until character (c) found.
 *
 * DESCRIPTION:
 * ============
 * The memccpy() function copies the bytes from string (src) to string (dst).
 * If the character (c)(converted to unsigned char) occurs in the string (src),
 * the copy stops.
 *
 * Return:
 *=======
 * a pointer to the byte after the copy of the character(c) in the string (dst)
 * is returned.
 * Otherwise, (len) bytes are copied, and a NULL pointer is returned.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void 	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t i;

	// Check if dst and src are == to NULL.
	if(!dst && !src)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		/*
		 * We write this line at the first, cause:
		 * even if src[i] = c or not, we should copy it to dst.
		 */
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		if (((const unsigned char *)src)[i] == (unsigned char)c)
		{
			/*
			 * a pointer to the byte after the copy of the character(c) in the string 
			 * (dst) is returned.
			 */
			return (dst + i + 1);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char dst[] = ".......";
	char src[] = "Ghaiath";
	printf("The string befor memccpy : %s\n", dst);
	memccpy(dst, src, 't', 7);
	printf("The string after: %s\n", dst);

// comparing with the original one.

	char dst1[] = ".......";
	char src1[] = "Ghaiath";
	printf("The string befor ft_memccpy : %s\n", dst1);
	ft_memccpy(dst1, src1, 't', 7);
	printf("The string after: %s\n", dst1);

	return EXIT_SUCCESS;
}
