#include "../main.h"

void	exec_cmds(t_list *envs, char *line)
{
	// pipe => exec_pipe
	// redirection => exec_redirection
	// dolar => exec_dolar
	// builtin => exec_builtin
	// other => "Error Command not found"
		
}

int		exec_builtin(t_list *envs, char *line)
{
	char **argv;

	argv = get_argv(envs, line);
	if (!strncmp(argv[0], "echo", ft_strlen(argv[0]))) // si argv == ech alors strncmp ne check que 3 char, c'est donc une commande valide
		cmd_echo(envs, argv);
	else if (!strncmp(argv[0], "cd", ft_strlen(argv[0])))
		cmd_cd(envs, argv);
	else if (!strncmp(argv[0], "pwd", ft_strlen(argv[0])))
		cmd_pwd(envs, argv);
	else if (!strncmp(argv[0], "export", ft_strlen(argv[0])))
		cmd_export(envs, argv);
	else if (!strncmp(argv[0], "unset", ft_strlen(argv[0])))
		cmd_unset(envs, argv);
	else if (!strncmp(argv[0], "env", ft_strlen(argv[0])))
		cmd_env(envs, argv);
	else if (!strncmp(argv[0], "exit", ft_strlen(argv[0])))
		cmd_exit(envs, argv);
	else
	{
		free_2d(argv); //////////// Free arr
		return (0);
	}
	free_2d(argv); ///////////////// Free arr
	return (1);
}