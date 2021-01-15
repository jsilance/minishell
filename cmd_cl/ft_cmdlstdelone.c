/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdlstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:52:28 by jsilance          #+#    #+#             */
/*   Updated: 2021/01/15 13:13:15 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cmd_cl.h"

void	ft_cmd_lstdelone(t_cmd_lst *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->str);
	del(lst->flags);
	free(lst);
}
