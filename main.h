/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:41:47 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 21:24:38 by jsilance         ###   ########.fr       */
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

typedef struct	s_sarg
{
	char	*input_str;
	
	t_list	*arg_lst;
	
	int		ret_val;
}				t_sarg;

void		strtolst(t_sarg *t);

#endif
