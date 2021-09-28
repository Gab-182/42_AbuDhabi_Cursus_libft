/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:31 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:46:32 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

size_t	ft_strlen_2(char **s)
{
	size_t	n = 0;

	while (s[n] != 0)
	{
		n++;
	}
	return (n);
}

// I'm not sure for now hoe to write the main function......
