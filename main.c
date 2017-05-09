/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 15:29:59 by arguerin          #+#    #+#             */
/*   Updated: 2017/04/28 12:30:27 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		main(int argc, char **argv)
{
	int	fd;
	char	*str;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		str = readfile(fd);
		if (checkfile(str))
		{
			printsquare(bouh(convert(str)));
		}
		else
			ft_putstr("tant pis, mauvais format\n");
	//	ft_putstr(str);
		close(fd);
	}
	else
		usage();
	return (0);
}
