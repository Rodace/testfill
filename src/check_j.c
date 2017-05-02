/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_j.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:48:37 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:22:35 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_j1(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#');
}

int		check_j2(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#');
}

/*
**	j1		j2		j3		j4
**	.#		#		##		###
**	.#		###		#		..#
**	##				#
*/

t_tetri	*write_j1(char *str, char c, t_tetri *tetri, int i)
{
	if (check_j1(str, i))
	{
		printf("write_j1\n");
		tetri->letter = c;
		tetri->c1x = 1;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 1;
		tetri->c3x = 0;
		tetri->c3y = 2;
		tetri->c4x = 1;
		tetri->c4y = 2;
	}
	else if (check_j2(str, i))
	{
		printf("write_j2\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 1;
		tetri->c3y = 1;
		tetri->c4x = 2;
		tetri->c4y = 1;
	}
	return (tetri);
}
