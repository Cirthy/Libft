#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		((int*)dest)[i] = ((int*)src)[i];
	return (dest);
}
