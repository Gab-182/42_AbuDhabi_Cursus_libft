/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:46:13 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/23 20:46:15 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		// Here we convert b to unsigned char then we compare
		// the value that b pointed to with c.
		
		if (*(unsigned char *)b == (unsigned char)c)
		{
			return  ((void *)b);
		}
		i++;
		b++;		
	}
	return (0);
}

int main()
{
   const char *str = "Learn C from trytoprogram.com";
   const char ch = 't';
   printf("str = %s\n\n", str);
   printf("Remaining string after '%c' : %s\n", ch, (char *) memchr( str, ch, strlen(str)));

   const char str1[] = "http://www.tutorialspoint.com";
   const char ch1 = '.';
   char *ret;

   ret = ft_memchr(str1, ch1, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return EXIT_SUCCESS;
}
