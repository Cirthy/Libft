void	ft_strrev(char  *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = -1;
	while (++i < size / 2)
		ft_swap(str + i, str + size - i - 1);
}