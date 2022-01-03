/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/20 12:22:23 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/23 01:23:12 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:53:53 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:19 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_split(): split string, with specified character as delimiter, into an 
 * array of strings.
 *
 * DESCRIPTION:
 * ============
 * Allocates with malloc() and returns an array of strings obtained by 
 * splitting ’s’ using the character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer.
 *
 * Split takes up a string and split it in many strings depending on the 
 * delimiter character. The function returns an array of strings.
 * 
 * Notes:
 * ------
 * 1) The char c will not be included in the new string.
 * 
 * 2) The split process will start from the first item in the string (s)
 *      and will end when we found the char (c) in the string.
 *      So, keep in mind to use malloc() just for items that will be copied
 *      to the new string.
 * 3) If you did not find the char (c) in the string (s), copy the whole
 *      string (s) to the new one with allocating the right amount of 
 *      memory to the new one.
 */

#include "libft.h"

static size_t	sup_str_len(char const *s, char c);
static size_t	count_sup_str(char const *s, char c);	
/*-------------------------------------------------------------------------*/
	/* 
	 * [1]
	 * Alocating memory to (full_str) by multiply the size of char (full_str)
	 * with the number of the sub_pointer that full_str is pointing to.
	 * [2]
	 * adding the (sub_str) to (full_str) by increasing the index (n)
	 * [3]
	 * the second while loop is to remove the char (c) from the pointers
	 * sub_str.
	 * [4]
	 * adding the (sub_str) to (full_str) by increasing the index (n)
	 * If there is no (sub_str) to add to (full_str) at all, return (null)
	 * cause that mean that the string is eampty, or the string was just
	 * contain the char (c).
	 * [5]
	* Move the pointer (s) location to the next (sub_str)
	*/

char	**ft_split(char const *s, char c)
{
	char	**full_str;
	size_t	sup_str_number;
	size_t	n;

	n = 0;
	sup_str_number = count_sup_str(s, c);
	full_str = (char **)malloc(sizeof(*full_str) * (count_sup_str(s, c) + 1));
	if (!full_str)
		return (NULL);
	while (sup_str_number)
	{
		while (*s == c && *s != '\0')
			s++;
		full_str[n] = ft_substr(s, 0, sup_str_len(s, c));
		if (full_str[n] == NULL)
			return (NULL);
		s = s + sup_str_len(s, c);
		n++;
		sup_str_number--;
	}
	full_str[n] = NULL;
	return (full_str);
}
/*-------------------------------------------------------------------------*/
/**
 * This function is for calculating how many (sub_str) we can devide
 * the full string (s) using the char (c). 
 * 
 * To better understand how this function work use pythontutor.com
 * to visualize the whole thing.
 */

static size_t	count_sup_str(const char *s, char c)
{
	size_t		sub_str_num;
	size_t		is_char_c;

	is_char_c = 0;
	sub_str_num = 0;
	while (*s != '\0')
	{
		if (is_char_c == 1 && *s == c)
			is_char_c = 0;
		if (is_char_c == 0 && *s != c)
		{
			is_char_c = 1;
			sub_str_num++;
		}
		s++;
	}
	return (sub_str_num);
}
/*-------------------------------------------------------------------------*/
/* This function is to calculate the length of each (sub_str) */

static size_t	sup_str_len(const char *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}
/*-------------------------------------------------------------------------*/
