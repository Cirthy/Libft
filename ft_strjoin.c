char	*fr_strjoin(char const *s1, char const *s2;)
{
	char	*str;
	int		i;
	int		j;

	if(!(str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j]= s2[j];
	str[i + j] = '\0';
	return (str);
}
