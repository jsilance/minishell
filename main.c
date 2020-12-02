/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:17:10 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 02:55:48 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/*
**	Simple test pour le pre-assemblage du reste.
*/

int	main(void)
{
	char	*str;
	int		ret;

	str = NULL;
	while (!0)
		if ((ret = get_next_line(0, &str)) > 0)
			write(1, str, ft_strlen(str));
		else
			break;
		// test
	return (0);
}
