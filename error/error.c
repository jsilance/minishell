/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:00:40 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/03 05:34:08 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int ft_error(int error, int ret_val)
{
    if (error == 1)
        ft_putendl_fd("Unknown command!", 2);
    return (ret_val);
}
