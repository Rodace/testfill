/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 14:40:25 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:13:19 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"
/*
 **	t1		t2		t3		t4
 **	.#		#		.#		###
 **	###		##		##		.#.
 **			#		.#
 */

t_tetri	*write_t1(t_tetri *tetri)
{

	printf("write_t1\n");
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 2;
	tetri->c4y = 1;
	return (tetri);
}
t_tetri	*write_t2(t_tetri *tetri)
{
	printf("write_t2\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 0;
	tetri->c4y = 2;
	return (tetri);
}

t_tetri	*write_t3(t_tetri *tetri)
{
	printf("write_t3\n");
	tetri->c1x = 1;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (0);
}
t_tetri	*write_t4(t_tetri *tetri)
{
	printf("write_t4\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 1;
	tetri->c4y = 1;
	return (tetri);
}
