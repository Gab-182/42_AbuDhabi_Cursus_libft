/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:47:08 by gabdoush          #+#    #+#             */
/*   Updated: 2021/09/21 20:47:09 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>



char    *ft_strrchr(const char *s, int c)
{

    while (*s != '\0')
    {
        s++;
    }
    s--;
    while (*s)
    {
        if (*s == c)
        {
            return (char *)s;
        }
        s--;
    }
    return (0);
}

int     main()
{
    char string[] = "Ghaiath Antoun Abdoush";
    printf("%s\n", ft_strrchr(string, 'A'));

    return (0);
}
