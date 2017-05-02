/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:44:23 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:23:23 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_l1(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#');
}

int		check_l2(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#');
}

/*
**	l1		l2		l3		l4
**	#		###		##		..#
**	#		#		.#		###
**	##				.#
*/

t_tetri	*write_l1(char *str, char c, t_tetri *tetri, int i)
{
	if (check_l1(str, i))
	{
		printf("write_l1\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 0;
		tetri->c3y = 2;
		tetri->c4x = 1;
		tetri->c4y = 2;
	}
	else if (check_l2(str, i))
	{
		printf("write_l2\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 2;
		tetri->c3y = 0;
		tetri->c4x = 0;
		tetri->c4y = 1;
	}
	return (tetri);
}
