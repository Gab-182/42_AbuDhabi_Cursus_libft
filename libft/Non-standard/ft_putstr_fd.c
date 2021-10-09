/**
 * This function is the same as ft_pustr(), But rather than writing to
 * the standard output, we write the string (s) to a file descriptor 
 * obtained from the open system call.
 * Outputs the string ’s’ to the given file descriptor.
 */

# include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
        while (*s)
        {
            write(fd, s, 1);
            s++;
        }
}
