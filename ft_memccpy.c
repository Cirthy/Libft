void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n && src[i] != c)
		dest[i] = src[i];
	if (i < n && src[i] == c)
	{
		dest[i] = c;
		return (dest + i + 1);
	}
	return (NULL);
}
