/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:18:12 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:36:32 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_s1(char *str, int i)
{
	return (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#');
}

int		check_s2(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#');
}

/*
**	s1		s2
**	.#		##.
**	##		.##
**	#.
*/

t_tetri	*write_s(char *str, char c, t_tetri *tetri, int i)
{
	if (check_s1(str, i))
	{
		printf("write_s1\n");
		tetri->letter = c;
		tetri->c1x = 1;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 1;
		tetri->c3x = 0;
		tetri->c3y = 1;
		tetri->c4x = 0;
		tetri->c4y = 2;
	}
	else if (check_s2(str, i))
	{
		printf("write_s2\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 1;
		tetri->c3y = 1;
		tetri->c4x = 2;
		tetri->c4y = 1;
	}
	return (tetri);
}
