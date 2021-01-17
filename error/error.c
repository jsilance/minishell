/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:00:40 by jsilance          #+#    #+#             */
/*   Updated: 2021/01/17 02:56:45 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int ft_error(int error, int ret_val)
{
    if (error == 1)
        ft_putendl_fd("Commandnot found!", 2);
    if (error == 2)
        ft_putendl_fd("Change directory has failed!", 2);
    return (ret_val);
}
