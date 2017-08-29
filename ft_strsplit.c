int		ft_wordcount(char *str, char c)
{
	int i;
	int wordcount;

	wordcount = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		wordcount++;
		while (str[i] && str[i] != c)
			i++;
	}
	i--;
	if (str[i] == c)
		wordcount--;
	return (wordcount);
}

int		ft_wordlen(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_fill_string(char *split_whitespaces_i, char *str, int *i, char c)
{
	int k;
	int len;

	k = -1;
	len = ft_wordlen(str + *i, c);
	split_whitespaces_i = (char*)malloc(len);
	if (split_whitespaces_i == NULL)
		return (NULL);
	while (++k < len && str[k])
		split_whitespaces_i[k] = str[(*i)++];
	split_whitespaces_i[k] = '\0';
	return (split_whitespaces_i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**split_whitespaces;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_wordcount(s, c) + 1;
	split_whitespaces = (char**)malloc(sizeof(*split_whitespaces) * len);
	if (split_whitespaces == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			split_whitespaces[j] =
				ft_fill_string(split_whitespaces[j], s, &i);
			j++;
		}
	}
	split_whitespaces[j] = NULL;
	return (split_whitespaces);
}
