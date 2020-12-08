int has_quote(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '\'' || str[i] == '\"')
			return (1);
	}
	return (0);
}

int has_pipe(char *str)
{
	int i;
	int num;

	i = -1;
	num = 0;
	while (str[++i])
	{
		if (str[i] == '|')
			num++;
	}
	return (num);
}

int has_redir(char *str)
{
	int i;
	int num;

	i = -1;
	num = 0;
	while (str[++i])
	{
		if (ft_strchr("><", str[i]))
			num++;
	}
	return (num);
}
