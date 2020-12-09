/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:41:47 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/09 03:54:21 by jsilance         ###   ########.fr       */
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

	int			ret_val;
}				t_sarg;

void			strtolst(t_sarg *t);
int				parser(t_sarg *t);
int				ft_error(int error, int ret_val);

#endif
