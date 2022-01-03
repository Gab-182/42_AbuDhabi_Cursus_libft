/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:53:17 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 17:53:35 by gabdoush         ###   ########.fr       */
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
