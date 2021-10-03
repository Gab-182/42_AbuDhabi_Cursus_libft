/*
* LIBRARY: <string.h>
* SYNOPSIS: size-bounded string concatenation
*
* DESCRIPTION from bsd-man:
* ============
* strlcat() take the full size of the buffer (not just the length)
* and guarantee to NUL-terminate the result (strlcat(), as long as there is at 
* least one byte free in dst(size > 0)).
*
* Note:
* -----
* you should include a byte for the NUL in size.
* In strlcat() both src and dst must be NUL-terminated.
* 
* Returning value:
* ----------------
* strlcat() function return the total length of the string that it tried to 
* create, that means the initial length of dst plus the length of src.
* 
* Note:
* -----
* however, that if strlcat() traverses size characters without finding a
* NUL, the length of the string is considered to be size and the destination
* string will not be NUL-terminated.
*
* If dest lenght was bigger than the dstsize, the length of dest
* should be equal to dstsize and don't concatenate.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dst_len;

	i = 0;
	dst_len = strlen(dst);

	/*
	 *for strlcat() both src and dst must be NUL-terminated.
	 * so dst, src should be a true “C” strings.
	 */
	if (!dst || !src)
	{
		return 0;
	}
	/*
	 * If dst lenght was bigger than the dstsize, the length of dst
	 * should be equal to dstsize and don't concatenate.
	 */
	if (dst_len > dstsize)
	{
		dst_len = dstsize;
	}
	/*
	 * I wrote the following while() condition cause, according to the man:
	 *
	 * The strlcat() function appends the NUL-terminated string src to the
	 * end of dst.
	 * It will append at most dstsize - strlen(dst) - 1 bytes,
	 * NUL-terminating the result.
	 */
	if (dstsize > 0 && dst_len < dstsize - 1)
	{
		while (dst_len + i < dstsize -1 && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + strlen(src));
}


int	main()
{
	char dst[50] = "Ghaiath";
	char src[50] = "Abdoush";
	size_t dstsize;
	dstsize = 2;

	printf("[1]\nft_strlcat\n");
	printf("dst, src befor ft_strlcat is :%s, %s\n", dst, src);
	printf("ft_strlcat is :%lu\n", ft_strlcat(dst, src, dstsize));
	printf("dst, src after ft_strlcat is :%s, %s\n\n\n", dst, src);

	return EXIT_SUCCESS;
}

/*
 * Note:
 *======
 * For the project, you need to replace strlen() with the function you wrote.
 * which is ft_strlen(), and should include the header libft.h for that.
 */
