#include <stdlib.h>
#include <stdio.h>

int		get_malloc_size(int n)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		i;
	char	*str;

	neg = n < 0 ? 1 : 0;
	n = n < 0 ? -n : n;
	if (!(str = (char*)malloc(get_malloc_size(n) + neg + 1)))
		return (NULL);
	i = 0;
	if (neg)
		str[i++] = '-';
	while (n / 10)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	str[i++] = n % 10 + '0';
	str[i] = '\0';
	ft_strrev(str + neg);
	return (str);
}
