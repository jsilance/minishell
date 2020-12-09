/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:53:26 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/09 03:41:39 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/*
**	Exit temporaire (pour exit sans leaks).
*/

static int	command_chekcer(char *str)
{
	int	i;

	if (str && !(i = 0))
		if (!ft_strcmp("exit", str))
			return (127);
	// return (ft_error(1, -1));
	return (1);
}

/*
**	cmd_index 0 --> exit
**	cmd_index 1 --> echo
**	cmd_index 2 --> cd
**	cmd_index 3 --> pwd
**	cmd_index 4 --> export
**	cmd_index 5 --> env
**	cmd_index 6 --> help
*/

static void	chain_maker(t_sarg *t)
{
	t_list	*ptr;

	ptr = t->arg_lst;
	while (ptr)
	{
		// if (!ft_strcmp("exit", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 0));
		// else if (!ft_strcmp("echo", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 1));
		// else if (!ft_strcmp("cd", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 2));
		// else if (!ft_strcmp("pwd", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 3));
		// else if (!ft_strcmp("export", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 4));
		// else if (!ft_strcmp("env", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 5));
		// else if (!ft_strcmp("help", ptr->content))
			// ft_cmd_lstadd_back(t->cmd, ft_cmd_lstnew(ft_strdup(ptr->content), NULL, 6));
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
