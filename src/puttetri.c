/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puttetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 11:16:10 by nadam             #+#    #+#             */
/*   Updated: 2017/05/02 15:46:27 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int	checkput(char **tab, t_tetri *tetri, int x, int y)
{
	return (tab[y + tetri->c1y][x + tetri->c1x] == '.' &&
			tab[y + tetri->c2y][x + tetri->c2x] == '.' &&
			tab[y + tetri->c3y][x + tetri->c3x] == '.' &&
			tab[y + tetri->c4y][x + tetri->c4x] == '.');
}

int	puttetri(char **tab, t_tetri *tetri, int x, int y)
{
	printf("puttetri\n");
	if(tabout((int)ft_strlen(tab[0]), x, y, tetri))
	{
		printf("tabout\n");
		return (0);
	}
	if (checkput(tab, tetri, x, y))
	{
		printf("Checkput done\n");
		tab[y + tetri->c1y][x + tetri->c1x] = tetri->letter;
		tab[y + tetri->c2y][x + tetri->c2x] = tetri->letter;
		tab[y + tetri->c3y][x + tetri->c3x] = tetri->letter;
		tab[y + tetri->c4y][x + tetri->c4x] = tetri->letter;
		return (1);
	}
	return (0);
}
