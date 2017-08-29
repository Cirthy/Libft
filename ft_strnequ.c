int	ft_strnequ(char const *s1, char const *s2, size_t size)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n || !s2[i])
		return (1);
	return (0);
}
