/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 12:24:52 by hgrissen          #+#    #+#             */
/*   Updated: 2020/12/30 15:26:44 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    prm_init()
{
    g_prm.inc   = 0;
    g_prm.w     = -1;
    g_prm.h     = -1;
    g_prm.fr    = -1;
    g_prm.fg    = -1;
    g_prm.fb    = -1;
    g_prm.cr    = -1;
    g_prm.cg    = -1;
    g_prm.cb    = -1;
    g_prm.no    = NULL;
    g_prm.so    = NULL;
    g_prm.we    = NULL;
    g_prm.ea    = NULL;
    g_prm.s     = NULL;
}

void    err_init()
{
    g_err.num_prm   = 0;
    g_err.dbl_inc   = 0;
    g_err.elm_inv   = 0;
}