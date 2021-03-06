/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 12:24:52 by hgrissen          #+#    #+#             */
/*   Updated: 2021/02/12 16:30:15 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	prm_init(void)
{
	g_prm.inc = 0;
	g_prm.w = -2;
	g_prm.h = -2;
	g_prm.fr = -1;
	g_prm.fg = -1;
	g_prm.fb = -1;
	g_prm.cr = -1;
	g_prm.cg = -1;
	g_prm.cb = -1;
	g_prm.no = NULL;
	g_prm.so = NULL;
	g_prm.we = NULL;
	g_prm.ea = NULL;
	g_prm.s = NULL;
	g_prm.str = NULL;
	g_prm.map = NULL;
	g_prm.nwlcnt = 0;
	g_prm.lnglin = 0;
}

void	err_init(void)
{
	g_err.num_prm = 0;
	g_err.dbl_inc = 0;
	g_err.elm_inv = 0;
	g_err.plr_cnt = 0;
	g_err.map_bgn = 0;
	g_err.inv_nwl = 0;
	g_err.map_inv = 0;
	g_err.map_spc = 0;
	g_err.map_open = 0;
}
