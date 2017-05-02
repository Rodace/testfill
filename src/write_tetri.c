/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 11:35:21 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 16:21:03 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	*write_tetri(char *str, char c, t_tetri *tetri, int i)
{
	tetri = write_i(str, c, tetri, i);
	tetri = write_o(str, c, tetri, i);
	tetri = write_s(str, c, tetri, i);
	tetri = write_z(str, c, tetri, i);
	tetri = write_t1(str, c, tetri, i);
	tetri = write_t2(str, c, tetri, i);
	tetri = write_l1(str, c, tetri, i);
	tetri = write_l2(str, c, tetri, i);
	tetri = write_j1(str, c, tetri, i);
	tetri = write_j2(str, c, tetri, i);
	return (tetri);
}
