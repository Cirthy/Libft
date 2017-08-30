#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	n = n < 0 ? -n : n;
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	ft_putchar_fd(n % 10 + '0', fd);
}
