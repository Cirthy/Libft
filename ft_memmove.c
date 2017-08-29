void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;
	int		i;

	if (!(tmp = malloc(sizeof(*src) * n)))
		return (NULL);
	i = -1;
	while (++i < n)
		tmp[i] = src[i];
	i = -1;
	while (++i < n)
		dest[i] = tmp[i];
	return (dest);
}
