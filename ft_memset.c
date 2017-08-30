#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	while(n--)
		((int*)s)[n] = c;
	return (s);
}