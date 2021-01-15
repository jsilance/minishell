/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:17:10 by jsilance          #+#    #+#             */
/*   Updated: 2021/01/16 00:00:25 by jsilance         ###   ########.fr       */
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

static void	promptor()
{
	char	*ptr;

	ptr = pather();
	write(1, "user:", 5);
	write(1, ptr, ft_strlen(ptr));
	write(1, "$ ", 2);
	free(ptr);
}

int			exiturn(t_sarg *t, int ext)
{
	ft_cmd_lstclear(&t->cmd, free);
	ft_lstclear(&t->arg_lst, free);
	free(t->input_str);
	if (ext)
		exit(0);
	return (0);
}

/*
**	Simple test pour le pre-assemblage du reste.
*/

int			main(void)
{
	t_sarg		t;
	int			ret;

	struct_init(&t);
	ret = 1;
	while (ret)
	{
		promptor();
		ret = get_next_line(0, &t.input_str);
		strtolst(&t);
		parser(&t);
		// dbg(&t);
		executor(&t);
		exiturn(&t, 0);
	}
	// exiturn(&t, 0);
	return (0);
}
