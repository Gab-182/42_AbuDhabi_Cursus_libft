/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:24 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:46:26 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	n ;

    n = 0;
	while(s[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	main(){
	printf("%lu", ft_strlen("Ghaiath"));
	// %lu ----> cause size_t is (unsigned long int)
	return 0;
}
