/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:04:12 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/11 14:33:16 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_tmp_dest;
	unsigned char	*ptr_tmp_src;
	size_t			count;

	if (!dst && !src)
		return (NULL);
	ptr_tmp_src = (unsigned char *)src;
	ptr_tmp_dest = (unsigned char *)dst;
	count = 0;
	while (count < n)
	{
		ptr_tmp_dest[count] = ptr_tmp_src[count];
		if (ptr_tmp_dest[count] == (unsigned char)c)
			return ((void*)(dst + count + 1));
		count++;
	}
	return (NULL);
}
