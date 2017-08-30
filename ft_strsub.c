#include "libft.h"

char	*strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!(str = (char*)malloc(ft_strlen(s) - start + 1)))
		return (NULL);
	i = start;
	while (++i != len + 1)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
