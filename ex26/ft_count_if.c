int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (tab[++i])
		if ((*f)(tab[i]) == 1)
			count++;
	return (count);
}
