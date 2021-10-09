/***
 * ft_putendl_fd():
 * ----------------
 * Outputs the string ’s’ to the given file descriptor, followed by 
 * a newline (\n).
*/

#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
        ft_putstr_fd(s, fd);
        write(fd, '\n', 1);
}