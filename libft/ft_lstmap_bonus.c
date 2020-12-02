/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:16:16 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/07 22:10:04 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr_lst;
	t_list	*ptr_new;

	if (lst && f && del)
	{
		if (!(ptr_lst = ft_lstnew(f(lst->content))))
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			if (!(ptr_new = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&ptr_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&ptr_lst, ptr_new);
			lst = lst->next;
		}
		return (ptr_lst);
	}
	return (NULL);
}
