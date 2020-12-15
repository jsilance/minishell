/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:53:26 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/14 23:25:18 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/*
**	Exit temporaire (pour exit sans leaks).
*/

static int	command_chekcer(char *str)
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

static void	chain_maker(t_sarg *t)
{
	t_list	*ptr;
	int		index;

	ptr = t->arg_lst;
	index = -1;
	while (ptr)
	{
		ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL,
			command_chekcer(ptr->content)));
		ptr = ptr->next;
	}
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
	return (command_chekcer(str));
}
