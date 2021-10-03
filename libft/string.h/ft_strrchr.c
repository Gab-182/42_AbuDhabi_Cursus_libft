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
# include <string.h>

char    *ft_strrchr(const char *s, int c)
{

    int n;

    n = strlen(s);
    while (n >= 0)
    {
        if (s[n] == (char)c)
        {
            return ((char *)&s[n]);
        }
        n--;
    }
    return (0);
}

int     main()
{
    char string[] = "Ghaiath Antoun Abdoush";
    printf("%s\n", ft_strrchr(string, 'a'));

    return (0);
}
