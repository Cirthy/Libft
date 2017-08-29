void	ft_putchar(char c);

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (++j < argc - i)
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(argv + j, argv + j + 1);
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
