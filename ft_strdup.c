#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;

	cpy = (char*)malloc(ft_strlen(str) + 1);
	i = -1;
	while (str[++i])
		cpy[i] = str[i];
	cpy[i]= '\0';
	return (cpy);
}
