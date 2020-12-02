/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:55:22 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/18 23:07:11 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == c))
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static char	**ft_duty_free(char **ptr_ptr, int words)
{
	int	i;

	i = 0;
	while (*ptr_ptr[i] && i < words)
		free((void *)ptr_ptr[i++]);
	if (ptr_ptr)
		free((void *)ptr_ptr);
	return (NULL);
}

static char	*malloc_word(char const *str, char c)
{
	char	*word;
	int		count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	if (!(word = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	count = 0;
	while (str[count] && str[count] != c)
	{
		word[count] = str[count];
		count++;
	}
	word[count] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	char	**tab;

	i = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s && *s != c)
		{
			if (!(tab[i++] = malloc_word(s, c)))
				return (ft_duty_free(tab, --i));
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
