#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void			*tmp;
	unsigned int	i;

	if (!(tmp = malloc(sizeof(*src) * n)))
		return (NULL);
	i = -1;
	while (++i < n)
		((int*)tmp)[i] = ((int*)src)[i];
	i = -1;
	while (++i < n)
		((int*)dest)[i] = ((int*)tmp)[i];
	return (dest);
}
