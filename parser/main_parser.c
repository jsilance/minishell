/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:53:26 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/03 05:50:12 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/*
**	Exit temporaire (pour exit sans leaks).
*/

static int	command_chekcer(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	if (str && !(i = 0))
	{
		if (len < 4)
			len = 4;
		if (!ft_strncmp("exit", str, len))
			return (127);
	}
	return (ft_error(1, -1));
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
