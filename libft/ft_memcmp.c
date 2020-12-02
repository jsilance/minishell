/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:04:51 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/07 21:43:36 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string_one;
	unsigned char	*string_two;
	size_t			count;

	string_one = (unsigned char *)s1;
	string_two = (unsigned char *)s2;
	count = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (*string_one == *string_two && count++ < n - 1)
	{
		string_one++;
		string_two++;
	}
	return ((int)(*string_one - *string_two));
}
