/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 09:45:50 by nadam             #+#    #+#             */
/*   Updated: 2017/04/28 17:02:41 by nadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_H
# define FILL_H

# include "libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef	struct	s_coord
{
	int		x;
	int		y;
}				t_coord;

typedef struct	s_tetri
{
	char	letter;
	int		c1x;
	int		c1y;
	int		c2x;
	int		c2y;
	int		c3x;
	int		c3y;
	int		c4x;
	int		c4y;
}				t_tetri;

void			freetab(char **tab);
int				find(char **tab, t_tetri **tetris, int pos, int size);
void			printtetri(t_tetri **tetri);
int				tabout(int size, int x, int y, t_tetri *tetri);
char			*readfile(int fd);
int				checkfile(char	*str);
void			usage(void);
char			**newtab(int size);
char			**renew(char **tab);
int				puttetri(char **tab, t_tetri *tetri, int x, int y);
void			rmtetri(char **tab, t_tetri *tetri, int x, int y);
t_tetri			**convert(char *str);
char			**bouh(t_tetri **tetris);
t_tetri			**memtetri(char *str);
void			printsquare(char **tab);
int				check_tetri(char *str, int i);
t_tetri			*write_tetri(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_i(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_s(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_z(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_o(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_t1(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_t2(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_l1(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_l2(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_j1(char *str, char c, t_tetri *tetri, int i);
t_tetri			*write_j2(char *str, char c, t_tetri *tetri, int i);
int				check_o(char *str, int i);
int				check_i1(char *str, int i);
int				check_i2(char *str, int i);
int				check_s1(char *str, int i);
int				check_s2(char *str, int i);
int				check_z1(char *str, int i);
int				check_z2(char *str, int i);
int				check_t1(char *str, int i);
int				check_t2(char *str, int i);
int				check_t3(char *str, int i);
int				check_t4(char *str, int i);
int				check_l1(char *str, int i);
int				check_l2(char *str, int i);
int				check_l3(char *str, int i);
int				check_l4(char *str, int i);
int				check_j1(char *str, int i);
int				check_j2(char *str, int i);
int				check_j3(char *str, int i);
int				check_j4(char *str, int i);

#endif
