/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:19:27 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/22 16:36:52 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int sign;
	
	i = 0;
	num = 0;
	sign = 1;

	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' 
	|| str[i] == '\r' || str[i] == '\f' ||str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

int	main()
{
	const char str[] = "--234";
	printf("%d\n----------\n", ft_atoi(str));
	printf("%d\n", atoi(str));

	return EXIT_SUCCESS;

}
