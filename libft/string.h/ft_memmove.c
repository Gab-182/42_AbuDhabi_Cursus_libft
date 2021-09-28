/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:35:41 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/23 09:06:17 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/*Note:
 *====
 * memcpy():
 * ----------
 * is is used to copy a specified number of bytes from one memory to another.
 *
 * memmove():
 * ----------
 * is used to copy a specified number of bytes from one memory to another or 
 * to overlap on same memory.
 *
 * Difference between memmove() and memcpy() is:
 * ---------------------------------------------
 * overlap can happen on memmove()
 * Whereas, memory overlap won’t happen in memcpy() 
 * and it should be done in non-destructive way.
 *============================================================================
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;

	unsigned char *temp;
	unsigned char new_char[len];
	temp = &new_char[len];
	while (i < len)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = temp[i];
		i++;
	}

	return (dst);
}
int	main () 
{
// 1:	
	char dest[] = "oldstring";
	const char src[]  = "newstring";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n\n", dest, src);
	
	char dest1[] = "oldstring";
	const char src1[]  = "newstring";
	printf("Before ft_memmove dest = %s, src = %s\n", dest1, src1);
	ft_memmove(dest1, src1, 9);
	printf("After ft_memmove dest = %s, src = %s\n\n\n", dest1, src1);


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
 * Very useful link to understand the defference:
 * ================================================
 * https://www.geeksforgeeks.org/memmove-in-cc/  
 *-------------------------------------------------
 * https://www.geeksforgeeks.org/write-memcpy/   
 * ================================================
 */
