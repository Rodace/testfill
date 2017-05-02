/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 15:20:46 by arguerin          #+#    #+#             */
/*   Updated: 2017/04/28 11:56:18 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		checkfile(char *str)
{
	int i;
	int bslashn;
	int tetri;

	tetri = 20;
	bslashn = 4;
	i = 0;
	while (str[i])
	{
		if (i == bslashn)
		{
			if (str[i] != '\n')
				return (0);
			bslashn += 5;
		}
		if (i == tetri)
		{
			if (str[i] != '\n')
				return (0);
			tetri += 21;
			bslashn += 1;
		}
		i++;
	}
	return (1);
}
