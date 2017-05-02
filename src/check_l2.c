/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_l2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 11:25:04 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:23:45 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_l3(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#');
}

int		check_l4(char *str, int i)
{
	return (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#');
}

/*
**	l1		l2		l3		l4
**	#		###		##		..#
**	#		#		.#		###
**	##				.#
*/

t_tetri	*write_l2(char *str, char c, t_tetri *tetri, int i)
{
	if (check_l3(str, i))
	{
		printf("write_l3\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 1;
		tetri->c3y = 1;
		tetri->c4x = 1;
		tetri->c4y = 2;
	}
	else if (check_l4(str, i))
	{
		printf("write_l4\n");
		tetri->letter = c;
		tetri->c1x = 2;
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
