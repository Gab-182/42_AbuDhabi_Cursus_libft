/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:46:51 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/01 10:46:55 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	char	*ptr;

	ptr = (char *)malloc(nmemb * size);
	n = 0;
	if (!nmemb || !size || !ptr)
	{
		return (NULL);
	}
	while (n < (nmemb * size))
	{
		ptr[n] = 0;
		n++;
	}
	return ((void *)ptr);
}
