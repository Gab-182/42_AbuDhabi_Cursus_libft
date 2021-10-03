/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:24:57 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/27 14:16:40 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * NOTE:
 * =====
 * Do not forget to change strlen(src) ----> ft_strlen(src) and include 
 * the libft lib.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	// If the src is not NUL-terminated, (return NULL).
	if (!src)
	{
		return (0);
	}
	/* 
	 * check if the size of the destination contain at least
	 * one byte to terminate the result.
	 */
	if (size > 0)
	{
		/*
		 * (size - 1):
		 * cause the function takes the full size of the buffer(size),
		 * and that is mean with '\0'.
		 * so by writeing size-1 we are comparing just the length.
		 */
		  while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		// We should now terminate the dst string.
		dst[i] = '\0';
	}
		/*
		 * According to the man page:
		 * ==========================
		 * The strlcpy() and strlcat() functions return the total 
		 * length of the string they tried to create.  
		 * For strlcpy() that means the length of src
		 */
		return (strlen(src));
}


int	main()
{
	char dst[] = ".............";
	const char src[] = "12";
	size_t len;
	len = 4;

	printf("Befor ft_strlcpy :%s, %s\n", dst, src);
	ft_strlcpy(dst, src, len);
	printf("After ft_strlcpy :%s, %s\n", dst, src);
	printf("The length created string is :%lu\n\n\n", ft_strlcpy(dst, src, len));
	
	return EXIT_SUCCESS;
}
/*
 * NOTE:
 * ====
 * Useful link about strlcpy && strlcat:
 * https://unix.stackexchange.com/questions/230948/implicit-declaration-of-strlcpy-and-strlcat-even-with-string-h-included
 *
 * NOTE:
 * ====
 * strlcpy() :
 * Accourding to my understanding, this function is to copy the exact 
 * (sizt_t size)
 * of characters from (src) to (dst)"//Starting from 0 count from src//", 
 * and delete the other chars from (dst) if there is any.
 * ----------------------------------------------------------------------------
 *
 *
 * DESCRIPTION:
 * ============
 *
 * The strlcpy() and strlcat() functions copy and concatenate strings
 * respectively.
 * They are designed to be safer, more consistent, and less error prone 
 * replacements for strncpy(3) and strncat(3).
 *
 * Unlike those functions, strlcpy() and strlcat() take the full size of 
 * the buffer (not just the length) and guarantee to NUL-terminate the result 
 * (as long as size is larger than 0 or, 
 * in the case of strlcat(),as long as there is at least one byte free in dst).
 * Note that:
 * ----------
 * you should include a byte for the NUL in size.  
 * Also note that
 * --------------
 * strlcpy() and strlcat() only operate on true ``C'' strings.
 * This means that for strlcpy() src must be NUL-terminated.
 * For strlcat() both src and dst must be NUL-terminated.
 *
 * The strlcpy() function copies up to size - 1 characters from the NUL-
 * terminated string src to dst, NUL-terminating the result.
*/
