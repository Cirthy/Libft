void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (i < n && s[i] != c)
		i++;
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
