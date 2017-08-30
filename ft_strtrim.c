#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		begin;
	int		end;
	int		i;
	char	*str;

	begin = 0;
	while (s[begin] == ' ' || s[begin] == '\n' || s[begin] == '\t')
		begin++;
	end = begin;
	while (s[end])
		i++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if(!(str = (char*)malloc(end - begin + 1)))
		return (NULL);
	i = begin - 1;
	while (++i < end)
		str[i] = s[begin + i];
	str[i] = '\0';
	return (str);
}
