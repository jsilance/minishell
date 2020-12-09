/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdlstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:28:38 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/09 03:48:30 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cmd_cl.h"

void	ft_cmd_lstclear(t_cmd_lst **lst, void (*del)(void*))
{
	t_cmd_lst	*ptr;
	t_cmd_lst	*tmp;

	if (!lst || !*lst || !del)
		return ;
	tmp = NULL;
	ptr = *lst;
	while (ptr)
	{
		tmp = ptr->next;
		ft_lstdelone(ptr, (*del));
		ptr = tmp;
	}
	*lst = NULL;
}
