/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:15:40 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:15:44 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	*write_o(t_tetri *tetri)
{
	printf("write_o\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 0;
	tetri->c4x = 1;
	tetri->c4y = 1;
	return (tetri);
}
