/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:41:47 by jsilance          #+#    #+#             */
/*   Updated: 2021/01/16 20:22:51 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H

# define MAIN_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

# include <stdio.h>

# include "libft/libft.h"
# include "gnl/get_next_line.h"
# include "cmd_cl/ft_cmd_cl.h"

typedef struct	s_cmd_lst	t_cmd_lst;

typedef struct	s_sarg
{
	char		*input_str;

	t_list		*arg_lst;
	t_cmd_lst	*cmd;
	t_list		*pid_lst;

	int			ret_val;
}				t_sarg;

void			strtolst(t_sarg *t);
int				parser(t_sarg *t);
int				ft_error(int error, int ret_val);
int				executor(t_sarg *t);
int				exiturn(t_sarg *t, int exit);
char			*pather();

void			dbg(t_sarg *t);

#endif
