#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t size)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < size)
		i++;
	if (i == size || !s2[i])
		return (1);
	return (0);
}
