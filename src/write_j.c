/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_j.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:48:37 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:23:53 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

/*
 **	j1		j2		j3		j4
 **	.#		#		##		###
 **	.#		###		#		..#
 **	##				#
 */

t_tetri	*write_j1(t_tetri *tetri)
{
	printf("write_j1\n");
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 1;
	tetri->c3x = 0;
	tetri->c3y = 2;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_j2(t_tetri *tetri)
{
	printf("write_j2\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 2;
	tetri->c4y = 1;
	return (tetri);
}

t_tetri	*write_j3(t_tetri *tetri)
{
	printf("write_j3\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 0;
	tetri->c3y = 1;
	tetri->c4x = 0;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_j4(t_tetri *tetri)
{
	printf("write_j4\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 2;
	tetri->c4y = 1;
	return (tetri);
}
