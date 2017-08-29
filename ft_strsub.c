char	*strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!(str = (char*)malloc(len - size + 1)))
		return (NULL);
	i = start - 1;
	while (++i != len)
		str[i] = s[start + i];
	str[i] = '\0';
}
