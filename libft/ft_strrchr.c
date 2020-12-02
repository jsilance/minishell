/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:21:05 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/07 21:52:47 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*ptr;

	ptr = (char *)s;
	count = ft_strlen(s);
	while (s && count >= 0)
	{
		if (ptr[count] == (char)c)
			return (&ptr[count]);
		count--;
	}
	return (NULL);
}

/*
** possibilite de ne faire qu un seule trajet
*/
