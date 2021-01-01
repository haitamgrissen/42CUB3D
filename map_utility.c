/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utility.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 15:17:13 by hgrissen          #+#    #+#             */
/*   Updated: 2021/01/01 15:17:56 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int is_map(int c)
{
    if(c == 'N'
    || c == 'W'
    || c == 'E'
    || c == 'S'
    || c == '0'
    || c == '1'
    || c == '2'
    || ft_isspace(c))
        return 1;
    else
        return 0;
}

int is_player(int c)
{
    if(c == 'N'
    || c == 'W'
    || c == 'E'
    || c == 'S'
    )
        return 1;
    else
        return 0;

}