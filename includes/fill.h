/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 09:45:50 by nadam             #+#    #+#             */
/*   Updated: 2017/05/09 15:25:48 by nadam            ###   ########.fr       */
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
t_tetri			*write_i1(t_tetri *tetri);
t_tetri			*write_i2(t_tetri *tetri);
t_tetri			*write_s1(t_tetri *tetri);
t_tetri			*write_s2(t_tetri *tetri);
t_tetri			*write_z1(t_tetri *tetri);
t_tetri			*write_z2(t_tetri *tetri);
t_tetri			*write_o(t_tetri *tetri);
t_tetri			*write_t1(t_tetri *tetri);
t_tetri			*write_t2(t_tetri *tetri);
t_tetri			*write_t3(t_tetri *tetri);
t_tetri			*write_t4(t_tetri *tetri);
t_tetri			*write_l1(t_tetri *tetri);
t_tetri			*write_l2(t_tetri *tetri);
t_tetri			*write_l3(t_tetri *tetri);
t_tetri			*write_l4(t_tetri *tetri);
t_tetri			*write_j1(t_tetri *tetri);
t_tetri			*write_j2(t_tetri *tetri);
t_tetri			*write_j3(t_tetri *tetri);
t_tetri			*write_j4(t_tetri *tetri);
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
t_tetri			*relou(char	*str, int i, int tmax, t_tetri *tetri);
t_tetri			*relou2(char *str, int i, int tmax, t_tetri *tetri);
t_tetri			*checkperso(char *str, int i, int tmax, t_tetri *tetri);

#endif
