/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstock.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 02:57:58 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/24 05:24:03 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Concatene from a mallocated string[*1] and a simple string to a new
**	mallocated string, before return the adress of the new mallocated string it
**	free the inputed mallocated string[*1].
*/

char	*ft_strstock(char *ptr, const char *str)
{
	char	*new_ptr;

	new_ptr = ft_strdup("");
	while (str && *str)
		new_ptr = ft_charstock(new_ptr, *str++);
	free(ptr);
	return (new_ptr);
}
