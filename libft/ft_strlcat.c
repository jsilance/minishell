/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:52:01 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/11 14:46:47 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	dst_size;
	size_t	src_size;

	if (!dst || !src)
		return (0);
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	count = dst_size;
	dst += count;
	while (++count < size && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (((size > dst_size) ? dst_size : size) + src_size);
}
