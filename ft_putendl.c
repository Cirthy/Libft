#include "libft.h"

void	ft_putendl(char const *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}
