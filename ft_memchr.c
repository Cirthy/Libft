#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = -1;
	while (i < n && ((int*)s)[i] != c)
		i++;
	if (((int*)s)[i] == c)
		return (((int*)s) + i);
	return (NULL);
}
