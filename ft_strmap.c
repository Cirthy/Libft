char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (!(str = (char*)malloc(sizeof(str*) * (ft_strlen(s) + 1))))
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = (*f)(s[i]);
	str[i] = '\0';
	return (str);
}
