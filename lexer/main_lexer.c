/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lexer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:46:21 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 17:47:21 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/*
**	convert the split return into lst.
**
**	/!\ need to fill the list by the parser and not by split /!\
*/

void	strtolst(t_sarg *t)
{
	char	**elems;
	int		i;

	i = 0;
	elems = ft_split(t->input_str, 32);
	while (elems && elems[i])
		ft_lstadd_back(&t->arg_lst, ft_lstnew(ft_strdup(elems[i++])));
	elems = ft_duty_free(elems, i - 1);
}