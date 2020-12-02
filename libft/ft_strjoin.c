/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 00:01:30 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/11 15:37:50 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	count;
	size_t			total_len;

	if (s1 && s2)
	{
		count = 0;
		total_len = ft_strlen((char *)s1) + ft_strlen(s2) + 1;
		if (!(ptr = ft_calloc(total_len, sizeof(char))))
			return (NULL);
		ft_strlcat(ptr, s1, total_len);
		ft_strlcat(ptr, s2, total_len);
		return (ptr);
	}
	return (NULL);
}
