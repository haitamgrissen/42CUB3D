/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:39:28 by hgrissen          #+#    #+#             */
/*   Updated: 2020/12/29 17:43:27 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int white_space(char *line)
{
    int i;

    i = 0;
    while (ft_isspace(line[i]))
		    i++;
    return (i);
}