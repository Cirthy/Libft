void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	n = n < 0 ? -n : n;
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
