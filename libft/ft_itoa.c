/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:40:49 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/01 16:33:35 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	unsigned int	count_len;

	count_len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count_len++;
	}
	return (count_len);
}

static char	*ft_strrev(char *str)
{
	int		size;
	int		count;
	char	tmp;

	count = 0;
	size = ft_strlen((char *)str) - 1;
	while (size > count)
	{
		tmp = str[count];
		str[count++] = str[size];
		str[size--] = tmp;
	}
	return ((char *)str);
}

char		*ft_itoa(int n)
{
	int		intlen;
	int		count;
	char	*str;

	count = 0;
	intlen = (n < 0) ? ft_intlen(n) + 1 : ft_intlen(n);
	if (!(str = malloc(sizeof(char) * (intlen + 1))))
		return (NULL);
	str[intlen] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[intlen - 1] = '-';
	while (n)
	{
		str[count++] = (n > 0) ? 48 + (n % 10) : 48 + ((n % 10) * -1);
		n /= 10;
	}
	str = ft_strrev((char *)str);
	return (str);
}
