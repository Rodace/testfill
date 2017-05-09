/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabout.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 16:49:22 by nadam             #+#    #+#             */
/*   Updated: 2017/05/02 15:27:49 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int	tabout(int size, int x, int y, t_tetri *tetri)
{
	return (tetri->c1x + x > size - 1 ||
			tetri->c2x + x > size - 1 ||
			tetri->c3x + x > size - 1 ||
			tetri->c4x + x > size - 1 ||
			tetri->c1y + y > size - 1 ||
			tetri->c2y + y > size - 1 ||
			tetri->c3y + y > size - 1 ||
			tetri->c4y + y > size - 1);
}
