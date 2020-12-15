/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdlstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 02:44:47 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/15 04:05:20 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cmd_cl.h"

t_cmd_lst	*ft_cmd_lstnew(void *str, void *flag, int index)
{
	t_cmd_lst	*ptr;

	if (!(ptr = (t_cmd_lst *)malloc(sizeof(t_cmd_lst))))
		return (NULL);
	ptr->str = str;
	ptr->flags = flag;
	ptr->cmd_index = index;
	ptr->pipe_next = 0;
	ptr->next = NULL;
	return (ptr);
}
