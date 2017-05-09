/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 09:45:02 by nadam             #+#    #+#             */
/*   Updated: 2017/05/02 16:54:10 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_tetri	**memtetri(char *str)
{
	int		count;
	int		i;
	int		len;
	t_tetri	**tetris;

	len = ft_strlen(str);
	count = 0;
	i = 0;
	printf("len = %i\n", len);
	while (i <= len)
	{
		if (str[i] == '\n' || str[i] == '\0')
		{
			printf("str[%i] = %c\n", i, str[i]);
			count++;
			i++;
		}
		i += 5;
	}
//	count++;
	printf("count = %i\n", count);
	tetris = (t_tetri **)ft_memalloc(sizeof(t_tetri *) * (count + 1));
	printf("Malloc\n");
	i = -1;
	while (++i < count)
	{
		tetris[i] = (t_tetri *)ft_memalloc(sizeof(t_tetri));
	}
	tetris[count] = 0;
	printtetri(tetris);
	printf("je te met un ZERO !!!!\n");
	return (tetris);
}
