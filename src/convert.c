/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 15:24:53 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 15:23:06 by nadam            ###   ########.fr       */
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
		printf("check = %i, i = %i\n", check_tetri(str, i), i);
		if (check_tetri(str, i))
			tetris[a] = write_tetri(str, c, tetris[a], i);
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
