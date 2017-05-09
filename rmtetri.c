/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmtetri.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:48:43 by nadam             #+#    #+#             */
/*   Updated: 2017/05/02 09:19:30 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

void	rmtetri(char **tab, t_tetri *tetri, int x, int y)
{
	tab[y + tetri->c1y][x + tetri->c1x] = '.';
	tab[y + tetri->c2y][x + tetri->c2x] = '.';
	tab[y + tetri->c3y][x + tetri->c3x] = '.';
	tab[y + tetri->c4y][x + tetri->c4x] = '.';
}
