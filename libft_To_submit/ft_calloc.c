/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 22:07:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/01 22:08:05 by gabdoush         ###   ########.fr       */
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
