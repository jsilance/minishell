/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:49:49 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/07 21:42:32 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src1;
	unsigned char	*dst;

	if (!dest && !src)
		return (NULL);
	src1 = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*dst++ = *src1++;
	return (dest);
}
