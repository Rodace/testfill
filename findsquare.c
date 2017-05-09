/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsquare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 10:29:25 by nadam             #+#    #+#             */
/*   Updated: 2017/05/02 17:07:15 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		find(char **tab, t_tetri **tetris, int pos, int size)
{
	int	x;
	int	y;

	x = pos / size;
	y = pos % size;
	printf(" tetris = %ld\n", (long)*tetris);
	if (!(*tetris))
		return (1);
	printf("------TAB AV------\n");
	printsquare(tab);
	printf("------------------\n");
	while (tab[y][x])
	{
		printf("x = %i, y = %i\n", x, y);
		if (puttetri(tab, *tetris, y, x))
		{
			printf("patate\n");
			if (find(tab, tetris + 1, 0, size))
				return (1);
			printsquare(tab);
			printf("\n----------------\n");
			rmtetri(tab, *tetris, y, x);
		}
		printf("sortie de patate\n");
		pos++;
		x = pos / size;
		y = pos % size;
	}
	return (0);
}

char	**bouh(t_tetri **tetris)
{
	char	**tab;
	char	**tmp;
	int		i;

	i = 2;
	printtetri(tetris);
	tab = newtab(2);
	printf("fin Newtab\n");
	while (i < 26 * 2)
	{
		printf("essaye de resoudre un tab[%i][%i]\n", i,i);
		if (find(tab, tetris, 0, i))
			break ;
		else
		{
			i++;
			freetab(tab);
			tmp = newtab(i);
			tab = tmp;
		}
	}
	return (tab);
}
