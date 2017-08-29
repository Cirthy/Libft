int	ft_atoi(char *str)
{
	unsigned int	integer;
	int				sgn;

	while ((*str > '9' || *str < '0') && *str != '-' && *str != '+')
	{
		if (*str != ' ' && (*str < 9 || *str > 13))
			return (0);
		str++;
	}
	sgn = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '+')
		str++;
	integer = 0;
	while ('0' <= *str && *str <= '9')
	{
		integer = (integer * 10) + (*str - '0');
		str++;
	}
	return (sgn * integer);
}
