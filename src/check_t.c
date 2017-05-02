/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:29:30 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:24:42 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_t1(char *str, int i)
{
	return (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#');
}

int		check_t2(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#');
}

/*
**	t1		t2		t3		t4
**	.#		#		.#		###
**	###		##		##		.#.
**			#		.#
*/

t_tetri	*write_t1(char *str, char c, t_tetri *tetri, int i)
{
	if (check_t1(str, i))
	{
		printf("write_t1\n");
		tetri->letter = c;
		tetri->c1x = 1;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 1;
		tetri->c3y = 1;
		tetri->c4x = 2;
		tetri->c4y = 1;
	}
	else if (check_t2(str, i))
	{
		printf("write_t2\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 1;
		tetri->c3y = 1;
		tetri->c4x = 0;
		tetri->c4y = 2;
	}
	return (tetri);
}
