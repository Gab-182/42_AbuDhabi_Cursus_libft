/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:52:12 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/22 12:48:42 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * ft_itoa(): convert integer to ASCII string
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument, Negative numbers must be handled.
 * If the allocation fails the function will return NULL.
 * 
 * @param (int)
 * @return char *
 */

#include "libft.h"

static size_t	ft_intlen(int num);

char	*ft_itoa(int n)
{
	char			*str;
	size_t			intlen;
	unsigned int	num_copy;

	intlen = ft_intlen(n);
	num_copy = n;
	if (n < 0)
	{
		num_copy = -1 * n;
		intlen++;
	}
	str = (char *)malloc(sizeof(char) * intlen + 1);
	ft_bzero(str, intlen + 1);
	if (!str)
		return (NULL);
	str[--intlen] = num_copy % 10 + '0';
	num_copy = num_copy / 10;
	while (num_copy)
	{
		str[--intlen] = num_copy % 10 + '0';
		num_copy = num_copy / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
/* 
 * *(str + 0) ---> To move The pointer to the first memory location 
 * of the string.
 * If the integer number is negative, put (-) at the first
 * memory location (str[0])
 */
/****************************************************************/
/* This function is to get the length of the integer (n)
 *
 * (i = 1) : if the (num) < 10.
 * that mean there is just one number in (num).
 */

static size_t	ft_intlen(int num)
{
	size_t	i;

	i = 1;
	num = num / 10;
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}
