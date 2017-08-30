#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n - 1 && ((int*)s1)[i] == ((int*)s2)[i])
		i++;
	return (((int*)s1)[i] - ((int*)s2)[i]);
}
