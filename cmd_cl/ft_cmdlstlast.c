/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdlstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 04:51:36 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/09 03:48:27 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cmd_cl.h"

t_cmd_lst	*ft_cmd_lstlast(t_cmd_lst *lst)
{
	t_cmd_lst	*ptr;

	ptr = NULL;
	while (lst)
	{
		ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}
