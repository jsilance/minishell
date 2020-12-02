/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:11:25 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 00:59:08 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	d;
	size_t	needle_size;

	c = 0;
	if (!haystack || !needle)
		return (NULL);
	needle_size = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[c] && c < len)
	{
		d = 0;
		while (haystack[c + d] == needle[d] && needle[d] && (c + d) < len)
			d++;
		if (d == needle_size)
			return ((char *)haystack + c);
		c++;
	}
	return (NULL);
}
