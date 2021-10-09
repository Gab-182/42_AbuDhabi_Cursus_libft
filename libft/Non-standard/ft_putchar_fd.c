/**
 * First:
 * ======
 * (fd) or a file descriptor is a number that uniquely identifies 
 * an open file in a computer's operating system. It describes a 
 * data resource, and how that resource may be accessed.
 * 
 * second:
 * =======
 * ft_putchar_fd():
 * Is the same as ft_puchar() function, BUT rather than writing to the 
 * standard output, we write the char (c) to a file descriptor 
 * obtained from the open system call.
 * 
 * This function gonna be used in ft_printf project.
 */
# include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}