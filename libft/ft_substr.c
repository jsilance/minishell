/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 22:00:22 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/13 12:09:01 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(ptr = malloc(sizeof(char) * ((int)len + 1))))
		return (NULL);
	ft_strlcpy(ptr, s + start, ++len);
	return (ptr);
}

/*
** len = maximum size of the new string.
*/
