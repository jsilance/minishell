/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:17:10 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/03 05:49:35 by jsilance         ###   ########.fr       */
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
	t_sarg	t;
	t_list	*ptr;
	int		ret;

	struct_init(&t);
	while (!0)
	{
		write(1, ">> ", 3);
		ret = get_next_line(0, &t.input_str);
		strtolst(&t);
		ptr = t.arg_lst;
		if (parser(&t) == 127)
			break;
		// while (ptr)             //Sorte de echo
		// {
		// 	write(1, "[", 1);
		// 	ft_putstr_fd(ptr->content, 1);
		// 	write(1, "]\n", 2);
		// 	ptr = ptr->next;
		// }
		ft_lstclear(&t.arg_lst, free);
	}
	ft_lstclear(&t.arg_lst, free);
	return (0);
}
