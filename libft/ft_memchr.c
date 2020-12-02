/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:42:01 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/01 17:46:03 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*tmp;

	count = 0;
	while (s && n-- > 0)
	{
		tmp = (unsigned char *)s;
		if (*tmp == (unsigned char)c)
			return (tmp);
		s++;
	}
	return (NULL);
}
