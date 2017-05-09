/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:18:12 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:02:29 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

/*
 **	s1		s2
 **	.#		##.
 **	##		.##
 **	#.
 */

t_tetri	*write_s1(t_tetri *tetri)
{
	printf("write_s1\n");
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 1;
	tetri->c3x = 0;
	tetri->c3y = 1;
	tetri->c4x = 0;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_s2(t_tetri *tetri)
{
	printf("write_s2\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 2;
	tetri->c4y = 1;
	return (tetri);
}
