#include "libft.h"

int		ft_nmatch(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i] && s2[i] != '*')
			return (0);
		if (s2[i] == '*')
			return (ft_nmatch(s1 + i, s2 + i + 1)
				+ ft_nmatch(s1 + i + 1, s2 + i));
		i++;
	}
	if (s2[i] == '*')
		return (ft_nmatch(s1 + i, s2 + i + 1));
	if ((!s1[i] && !s2[i]))
		return (1);
	return (0);
}
