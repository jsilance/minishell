/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:17:10 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/15 03:41:39 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/*
**	Initialise every variables of the struct to 0 for overriding some garbage
**	values.
*/

static void	struct_init(t_sarg *t)
{
	t->input_str = NULL;
	t->arg_lst = NULL;
	t->ret_val = 0;
}

/*
**	Simple test pour le pre-assemblage du reste.
*/

int			main(void)
{
	t_sarg		t;
	t_list		*ptr;

	t_cmd_lst	*cmd_ptr;

	int			ret;

	struct_init(&t);
	while (!0)
	{
		write(1, ">> ", 3);
		ret = get_next_line(0, &t.input_str);
		strtolst(&t);
		ptr = t.arg_lst;
		parser(&t);
		cmd_ptr = t.cmd;
		while (cmd_ptr)             //Sorte de echo
		{
			printf("command index:     [%d]\n", cmd_ptr->cmd_index);
			printf("command flags:     [%s]\n", cmd_ptr->flags);
			printf("command pipe next: [%d]\n", cmd_ptr->pipe_next);
			printf("command string:    [%s]\n\n", cmd_ptr->str);
			ret = cmd_ptr->cmd_index;
			cmd_ptr = cmd_ptr->next;
		}
		if (ret == -1)
			ft_error(1, 0);
		if (ret == 0)
			break;
		ft_cmd_lstclear(&t.cmd, free);
		ft_lstclear(&t.arg_lst, free);
		free(t.input_str);
	}
	ft_cmd_lstclear(&t.cmd, free);
	ft_lstclear(&t.arg_lst, free);
	free(t.input_str);
	return (0);
}
