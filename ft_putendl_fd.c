#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	while (*str)
		ft_putchar_fd(*(str++), fd);
	ft_putchar('\n');
}
