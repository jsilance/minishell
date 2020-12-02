/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:17:10 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 01:15:24 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	char	*str;
	int		ret;
	
	str = NULL;
	if ((ret = get_next_line(0, &str)) < 0)
		write(1, str, ft_strlen(str));
	return (0); 
}
