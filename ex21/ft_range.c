#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	int				*range;

	if (min >= max)
		return (NULL);
	if (!(range = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = -1;
	while (++i < (unsigned int)(max - min))
		range[i] = min + i;
	return (range);
}