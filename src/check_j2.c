/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_j2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 11:24:18 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:23:03 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_j3(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#');
}

int		check_j4(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#');
}

/*
**	j1		j2		j3		j4
**	.#		#		##		###
**	.#		###		#		..#
**	##				#
*/

t_tetri	*write_j2(char *str, char c, t_tetri *tetri, int i)
{
	if (check_j3(str, i))
	{
		printf("write_j3\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 0;
		tetri->c3y = 1;
		tetri->c4x = 0;
		tetri->c4y = 2;
	}
	else if (check_j4(str, i))
	{
		printf("write_j4\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 2;
		tetri->c3y = 0;
		tetri->c4x = 2;
		tetri->c4y = 1;
	}
	return (tetri);
}
