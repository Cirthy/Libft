#include "libft.h"

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;	
}

void	ft_strrev(char  *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = -1;
	while (++i < size / 2)
		ft_swap(str + i, str + size - i - 1);
}
