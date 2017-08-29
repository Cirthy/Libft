#include <stdlib.h>

int		ft_strlen(char *str)
{
	return (*str ? 1 + ft_strlen(str + 1) : 0);
}

char	*ft_strdup(char *src)
{
	char	*cp;
	int		i;

	cp = (char*)malloc(ft_strlen(src) + 1);
	i = -1;
	while (src[++i])
		cp[i] = src[i];
	cp[i] = '\0';
	return (cp);
}