/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:41:29 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/07 21:51:55 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_size;

	if (src && dst)
	{
		count = 0;
		src_size = ft_strlen(src);
		if (size == 0)
			return (src_size);
		while (count++ < size - 1 && *src)
			*dst++ = *src++;
		*dst = '\0';
		return ((count > src_size) ? --count : src_size);
	}
	return (0);
}
