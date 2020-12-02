/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lexer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:46:21 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 22:26:44 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

static void str_store(t_sarg *t, int j, int i, int sep)
{
	if (i-j > 0)
		ft_lstadd_back(&t->arg_lst, ft_lstnew(ft_substr(t->input_str, j,
			i-j)));
	if (sep)
		ft_lstadd_back(&t->arg_lst, ft_lstnew(ft_substr(t->input_str,
			i, sep)));
}

static void	str_cut(t_sarg *t)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (t->input_str && t->input_str[i])
	{
		if (t->input_str[i] == '>')
		{
			if (t->input_str[i + 1] == '>')
				str_store(t, j, i++, 2);
			else
				str_store(t, j, i, 1);
			j = i + 1;
		}
		else if (ft_strchr(" <|;", t->input_str[i]))
		{
			str_store(t, j, i, 1);
			j = i + 1;
		}
		i++;
	}
	if (!t->input_str[i])
		str_store(t, j, i, 0);
}

void	strtolst(t_sarg *t)
{
	str_cut(t);
}