/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 15:24:53 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:35:18 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	**convert(char *str)
{
	t_tetri	**tetris;
	int		i;
	int		j;
	int		a;
	char	c;

	j = 0;
	c = 'A';
	a = 0;
	tetris = memtetri(str);
	printf("@tetris = %li\n",(long)tetris);
	while (tetris[a])
	{
		i = j;
		while (str[i] != '#')
			i++;
		printf("# = %i, j = %i, j+21 = %i\n", i, j, j+21);
		tetris[a] = checkperso(str, i, j + 21, tetris[a]);
		tetris[a]->letter = c;
		printf("apres avoir write\n");
		a++;
		c++;
		j += 21;
		if ((size_t)j > ft_strlen(str))
			break ;
	}
	printf("avant printtetri\n");
	printtetri(tetris);
	printf("Fin de convert\n");
	return (tetris);
}
