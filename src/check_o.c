/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:15:40 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:23:59 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_o(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#');
}

t_tetri	*write_o(char *str, char c, t_tetri *tetri, int i)
{
	if (check_o(str, i))
	{
		printf("write_o\n");
		tetri->letter = c;
		tetri->c1x = 0;
		tetri->c1y = 0;
		tetri->c2x = 0;
		tetri->c2y = 1;
		tetri->c3x = 1;
		tetri->c3y = 0;
		tetri->c4x = 1;
		tetri->c4y = 1;
	}
	return (tetri);
}
