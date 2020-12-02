/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:18:15 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/11 14:46:36 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	if (!(ptr = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s)
		ft_memcpy(ptr, s, ft_strlen(s));
	ptr[ft_strlen(s)] = '\0';
	return ((char *)ptr);
}
