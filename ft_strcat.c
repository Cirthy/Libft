#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = src[j];
	return (dest);
}
