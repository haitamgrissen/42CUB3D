/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bg_music.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:48:37 by hgrissen          #+#    #+#             */
/*   Updated: 2021/02/19 14:46:16 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	play_m(void)
{
	char	*afplay[3];
	int		pid;

	afplay[0] = "/usr/bin/afplay";
	afplay[1] = "./music/deja_vu_bgm.mp3";
	afplay[2] = 0;
	if (BON)
	{
		if ((pid = fork()) == 0)
		{
			execve(afplay[0], afplay, NULL);
		}
		else
			g_pid = pid;
	}
}
