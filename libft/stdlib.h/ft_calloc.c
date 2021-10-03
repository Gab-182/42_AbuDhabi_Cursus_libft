/*
 * LIBRARY: <stdlib.h>
 * ft_calloc : contiguous allocation.
 *
 * Describtion:
 * ------------
 * The calloc() function allocates memory for an array of (nmemb) elements of 
 * (size) bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * Block of memory would be allocated: malloc(nmemb * size);
 * If (nmemb) or (size) is 0, then calloc() returns NULL.
 */

# include <stdlib.h>
# include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t n;
	char *ptr;

	/*
	 * (char *): cause malloc() will give us a void type result, but the
	 * ptr pointer ic a char type pointer, that is why we needed that 
	 * conversion.
	 */
	ptr = (char *)malloc(nmemb * size);
	n = 0;
	/*
	 * If (nmemb) or (size) is 0, then calloc() returns NULL.
	 */
	if (! nmemb || ! size || ! ptr)
	{
		return (NULL);
	}
	/*
	 * fill the created memory location with zeros.
	 */
	while (n < (nmemb * size))
	{
		ptr[n] = 0;
		n++;
	}
	/*
	 * void( *):
	 * since the ft_calloc() function should return a void result.
	 */
	return (void *)ptr;
}

int	main()
{
	char *ptr1;
	char *ptr2;

	size_t nmemb;
	size_t size;

	nmemb = 5;
	size = 2;

	ptr1 = (char *)ft_calloc(nmemb, size);
	ptr2 =  (char *)calloc(nmemb, size);

	printf("create a memory location with ft_calloc(): %p\n", ptr1);
	printf("create a memory location with calloc(): %p\n", ptr2);

	return EXIT_SUCCESS;
}

/*
 * Important Note:
 * ===============
 * check the visulation proccess, and how the memory locations were created
 * on and fill it with zeros:
 * https://pythontutor.com/c.html#mode=edit
 */
