#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int 	i;
	int 	j;
	int 	is_inside;

	if (to_find[0] == '\0')
		return ((char*)str);
	is_inside = 0;
	i = 0;
	while (str[i] != '\0' && !is_inside)
	{
		is_inside = 1;
		j = 0;
		while (to_find[j] != '\0' && str[i + j] != '\0' && is_inside)
		{
			if (to_find[j] != str[i + j])
				is_inside = 0;
			j++;
		}
		if (to_find[j] == '\0' && is_inside)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
