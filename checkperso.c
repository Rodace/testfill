/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:11:10 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:18:53 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	*checkperso(char *str, int i, int tmax, t_tetri *tetri)
{
	if (i + 15 <= tmax)
		if (check_i1(str, i))
			return (write_i1(tetri));
	if (i + 11 <= tmax)
	{
		if (check_l1(str, i))
			return (write_l1(tetri));
		if (check_l3(str, i))
			return (write_l3(tetri));
		if (check_z1(str, i))
			return (write_z1(tetri));
	}
	if (i + 10 <= tmax)
	{
		if (check_j1(str, i))
			return (write_j1(tetri));
		if (check_j3(str, i))
			return (write_j3(tetri));
		if (check_t2(str, i))
			return (write_t2(tetri));
		if (check_t3(str, i))
			return (write_t3(tetri));
	}
	return (relou(str, i, tmax, tetri));
}

t_tetri	*relou(char *str, int i, int tmax, t_tetri *tetri)
{
	if (i + 9 <= tmax)
	{
		if (check_s1(str, i))
			return (write_s1(tetri));
	}
	if (i + 7 <= tmax)
	{
		if (check_j2(str, i))
			return (write_j2(tetri));
		if (check_j4(str, i))
			return (write_j4(tetri));
		if (check_s2(str, i))
			return (write_s2(tetri));
	}
	if (i + 6 <= tmax)
	{
		if (check_t1(str, i))
			return (write_t1(tetri));
		if (check_t4(str, i))
			return (write_t4(tetri));
		if (check_o(str, i))
			return (write_o(tetri));
	}
	return (relou2(str, i, tmax, tetri));
}

t_tetri	*relou2(char *str, int i, int tmax, t_tetri *tetri)
{
	if (i + 5 <= tmax)
	{
		if (check_l2(str, i))
			return (write_l2(tetri));
		if (check_l4(str, i))
			return (write_l4(tetri));
		if (check_z2(str, i))
			return (write_z2(tetri));
	}
	if (check_i2(str, i))
		return (write_i2(tetri));
	return (NULL);
}
