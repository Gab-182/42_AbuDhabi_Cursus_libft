/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:35:00 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:35:02 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iscntrl(int n)
{
	if ((n >= 0 && n <= 31) || (n == 127))
	{
		return (1);
	}
	return (0);
}
