/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:53:26 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/15 05:15:57 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

static int	cmd_arg_check(char *str)
{
	if (!ft_strcmp("-n", str))
		return (1);
	return (0);
}

static int	cmd_chekcer(char *str)
{
	if (str)
	{
		if (!ft_strcmp("exit", str))
			return (0);
		else if (!ft_strcmp("echo", str))
			return (1);
		else if (!ft_strcmp("cd", str))
			return (2);
		else if (!ft_strcmp("pwd", str))
			return (3);
		else if (!ft_strcmp("export", str))
			return (4);
		else if (!ft_strcmp("env", str))
			return (5);
		else if (!ft_strcmp("help", str))
			return (6);
	}
	// return (ft_error(1, -1));
	return (-1);
}

/*
**	cmd_index -1 --> error
**	cmd_index  0 --> exit
**	cmd_index  1 --> echo
**	cmd_index  2 --> cd
**	cmd_index  3 --> pwd
**	cmd_index  4 --> export
**	cmd_index  5 --> env
**	cmd_index  6 --> help
*/

static int	chain_maker(t_sarg *t)
{
	t_list		*ptr;
	t_cmd_lst	*cmd_ptr;

	ptr = t->arg_lst;
	cmd_ptr = NULL;
	while(ptr)
	{
		if (!ft_strcmp(ptr->content, ";") && (ptr = ptr->next))
			continue ;
		if (!ptr)
			continue ;
		printf("[%s]\n", ptr->content);
		ft_cmd_lstadd_back(&t->cmd, ft_cmd_lstnew(NULL, NULL,
			cmd_chekcer(ptr->content)));
		cmd_ptr = ft_cmd_lstlast(t->cmd);
		if (!(ptr = ptr->next) || !ft_strcmp(ptr->content, ";"))
			continue ;
		if (ptr && cmd_ptr->cmd_index == 1 && cmd_arg_check(ptr->content))
		{
			cmd_ptr->flags = ft_strdup(ptr->content);
			if (!(ptr = ptr->next) || !ft_strcmp(ptr->content, ";"))
				break ;
		}
		cmd_ptr->str = ft_strdup(ptr->content);
		if (!(ptr = ptr->next) || !ft_strcmp(ptr->content, ";"))
			continue ;
		if (ptr && !ft_strcmp(ptr->content, "|"))
		{
			cmd_ptr->pipe_next = 1;
			if (!(ptr = ptr->next))
				break ;
		}
		// security if too much of arguments
		if (!(ptr = ptr->next))
			break ;
	}
	return (0);
}

/*
**	Temporary exit
*/

int			parser(t_sarg *t)
{
	char	*str;

	str = NULL;
	if (t->arg_lst)
		str = t->arg_lst->content;
	return (chain_maker(t));
}
