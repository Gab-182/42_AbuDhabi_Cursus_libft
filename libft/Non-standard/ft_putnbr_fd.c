/***
 * ft_putnbr_fd():
 * ---------------
 * This function is  the same as ft_putnbr(), but rather than writing 
 * to the standard output, we write the integer (n) to a file 
 * descriptor obtained from the open system call.
 * 
 * This is a recursive function.
 *          ----------
 * So ft_putnbr_fd() will be called until n be less than 10
 * when last function is finished, all the other uncompleted 
 * ft_putnbr_fd() functions will continue untill the first one.
*/

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -1 * n;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd((char)(n + '0'), fd);
	}
}