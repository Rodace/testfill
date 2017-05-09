/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:03:48 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:24:13 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	*write_i1(t_tetri *tetri)
{
	printf("write_i1\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 0;
	tetri->c3y = 2;
	tetri->c4x = 0;
	tetri->c4y = 3;
	return (tetri);
}
t_tetri *write_i2(t_tetri *tetri)
{
	printf("write_i2\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 3;
	tetri->c4y = 0;
	return (tetri);
}
