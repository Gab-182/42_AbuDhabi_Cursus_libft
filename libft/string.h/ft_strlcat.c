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
* The strlcat():
* ===============
* appends the NUL-terminated string src to the end of dst.
* It will append at most dstsize - strlen(dst) - 1 bytes, NUL-terminating the 
* result.
* 
* Returning value:
* ----------------
* strlcat() function return the total length of the string that it tried to 
* create, that means the initial length of dst plus the length of src.

* If dest lenght was bigger than the dstsize, the length of dest
* should be equal to dstsize and don't concatenate.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

  size_t	strlcat(char *dst, const char *src, size_t dstsize)
  {
 	size_t i;
 	size_t j;

 	i = 0;
 	j = 0;
 	//for strlcat() both src and dst must be NUL-terminated.
	// so dst, src should be a true “C” strings.
 	if (!dst || !src) 
 	{
 		return 0;
 	}
	//If dest lenght was bigger than the dstsize, the length of dest
	//should be equal to size and don't concatenate.
 	if (strlen(dst) >= dstsize)
	{
		return (strlen(dst) + strlen(src));
	}
	

  }

int	main()
{
	char dst[50] = "Ghaiath";
	char src[50] = "Abdoush";
	size_t dstsize;
	dstsize = 4;
	
	printf("dst, src befor ft_strlcat is :%s, %s\n", dst, src);
//	ft_strlcat(dst, src, dstsize);
	printf("ft_strlcat is :%lu\n", ft_strlcat(dst, src, dstsize));

	printf("dst, src after ft_strlcat is :%s, %s\n", dst, src);
	
	return EXIT_SUCCESS;
}
