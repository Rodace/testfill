/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:03:48 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:22:16 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_i1(char *str, int i)
{
	return (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#');
}

int		check_i2(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#');
}

t_tetri	*write_i(char *str, char c, t_tetri *tetri, int i)
{
	if (check_i1(str, i))
	{
		printf("write_i1\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 0;
		tetri->c3y = 2;
		tetri->c4x = 0;
		tetri->c4y = 3;
	}
	else if (check_i2(str, i))
	{
		printf("write_i2\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 1;
		tetri->c2y = 0;
		tetri->c3x = 2;
		tetri->c3y = 0;
		tetri->c4x = 3;
		tetri->c4y = 0;
	}
	return (tetri);
}
