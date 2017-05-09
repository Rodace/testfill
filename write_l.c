/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:44:23 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:27:52 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

/*
 **	l1		l2		l3		l4
 **	#		###		##		..#
 **	#		#		.#		###
 **	##				.#
 */

t_tetri	*write_l1(t_tetri *tetri)
{
	printf("write_l1\n");

	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 0;
	tetri->c3y = 2;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}
t_tetri	*write_l2(t_tetri *tetri)
{
	printf("write_l2\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 2;
	tetri->c3y = 0;
	tetri->c4x = 0;
	tetri->c4y = 1;

	return (tetri);
}

t_tetri	*write_l3(t_tetri *tetri)
{
	printf("write_l3\n");
	tetri->c1x = 0;
	tetri->c1y = 0;
	tetri->c2x = 1;
	tetri->c2y = 0;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 1;
	tetri->c4y = 2;
	return (tetri);
}
t_tetri	*write_l4(t_tetri *tetri)
{
	printf("write_l4\n");
	tetri->c1x = 2;
	tetri->c1y = 0;
	tetri->c2x = 0;
	tetri->c2y = 1;
	tetri->c3x = 1;
	tetri->c3y = 1;
	tetri->c4x = 2;
	tetri->c4y = 1;

	return (tetri);
}
