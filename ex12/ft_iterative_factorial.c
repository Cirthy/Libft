int	ft_iterative_factorial(int nb)
{
	int	i;
	int fact;

	if (nb < 0 || nb > 12)
		return (0);
	fact = 1;
	i = 1;
	while (++i <= nb)
		fact *= i;
	return (fact);
}