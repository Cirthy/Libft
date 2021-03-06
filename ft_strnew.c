#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	if(!(str = (char*)malloc(sizeof(*str) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		str[i] = '\0';
	return (str);
}
