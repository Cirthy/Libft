#include "libft.h"

int		ft_match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i] && s2[i] != '*')
			return (0);
		if (s2[i] == '*')
		{
			if (ft_match(s1 + i, s2 + i + 1))
				return (1);
			return (ft_match(s1 + i + 1, s2 + i));
		}
		i++;
	}
	if (s2[i] == '*')
		return (ft_match(s1 + i, s2 + i + 1));
	if ((!s1[i] && !s2[i]))
		return (1);
	return (0);
}
