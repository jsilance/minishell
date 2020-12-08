/*
	Execution des comandes 

	main.c
		=> recuperation des events
		=> boucle si il y a un event
		x=> show prompt
		x=> recuperation des cmds trim (";")
		=> boucle sur chaqe cmds
		=> Execution des cmds
		=> free 

EXECUCTION COMANDES => liste des events, et cmds a envoyer dans la f
	void exec_cmds(t_list envs, char *cmds)
	{
		=>check si pipe => exec_pipe
		=>check si redirection => exec_redir
		=>check si dollar
		=>check si builtin => exec_builtin
		=>other=> command not found
	}

	int exec_builtin(t_list envs, char*cmds)
	{
		x=>cmd_echo
		x=>cmd_cd
		x=>cmd_pwd
		x=>cmd_export
		x=>cmd_unset
		x=>cmd_env
		x=>cmd_exit
	}


 x=>has_quote '\'' '\"'
 x=>has_envir '$'
 x=>has_dollar "$?"

 ctrl-C => sortie de cmds
 ctrl-D => quit shell
 ctrl-\ => 
*/

