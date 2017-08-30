#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && ((int*)src)[i] != c)
		((int*)dest)[i] = ((int*)src)[i];
	if (i < n && ((int*)src)[i] == c)
	{
		((int*)dest)[i] = c;
		return (dest + i + 1);
	}
	return (NULL);
}
