char **get_cmds(char *line)
{
	int		i;
	int		empty;
	char 	**cmds;
	char 	*buf;

	empty = 0;
	cmds = ft_split(line, ';');
	i = -1;
	while (cmds[++i])
	{
		buf = ft_strtrim(cmds[i], " ");
		if (!buf || !(*buf))
			empty = 1;
		free(cmds[i]);
		if (!empty)
			cmds[i] = buf;
	}
}