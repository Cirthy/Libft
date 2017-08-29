int	ft_strlen(char *str)
{
	return (*str ? 1 + ft_strlen(str + 1) : 0);
}