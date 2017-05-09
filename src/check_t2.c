/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_t2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 11:23:14 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:26:42 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"
/*
int		check_t3(char *str, int i)
{
	return (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#');
}

int		check_t4(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#');
}
*/
/*
**	t1		t2		t3		t4
**	.#		#		.#		###
**	###		##		##		.#.
**			#		.#
*/
/*
t_tetri	*write_t2(char *str, char c, t_tetri *tetri, int i)
{
	if (check_t3(str, i))
	{
		printf("write_t3\n");
		tetri->letter = c;
		tetri->c1x = 1;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 1;
		tetri->c3y = 1;
		tetri->c4x = 1;
		tetri->c4y = 2;
	}
	else if (check_t4(str, i))
	{
		printf("write_t4\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 2;
		tetri->c3y = 0;
		tetri->c4x = 1;
		tetri->c4y = 1;
	}
	return (tetri);
}
*/
