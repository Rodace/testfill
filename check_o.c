/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:15:40 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:15:56 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

int		check_o(char *str, int i)
{
	return (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#');
}
