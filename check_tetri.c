/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:11:10 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 11:49:35 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int	check_tetri(char *str, int i)
{
	return (check_i1(str, i) ||
			check_i2(str, i) ||
			check_s1(str, i) ||
			check_s2(str, i) ||
			check_z1(str, i) ||
			check_z2(str, i) ||
			check_o(str, i) ||
			check_l1(str, i) ||
			check_l2(str, i) ||
			check_l3(str, i) ||
			check_l4(str, i) ||
			check_j1(str, i) ||
			check_j2(str, i) ||
			check_j3(str, i) ||
			check_j4(str, i) ||
			check_t1(str, i) ||
			check_t2(str, i) ||
			check_t3(str, i) ||
			check_t4(str, i));
}
