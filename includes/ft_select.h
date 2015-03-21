/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 15:42:48 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/17 15:43:54 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H
# include "libft.h"
# include <signal.h>
# include <term.h>
# include <termios.h>
# include <termcap.h>


typedef struct 	s_lst
{
	char	*value;
	int		select;
	int		line;
	struct	s_lst *next;
	struct	s_lst *prev;
}				t_lst;

typedef enum	s_enum
{
	LEFT_KEY = 1480874779,
	RIGHT_KEY = 1480809243,
	UP_KEY = 1480678171,
	DOWN_KEY = 1480743707,
	ESC_KEY = 27,
	SPACE_KEY = 1469045280,
}				t_enum;

typedef struct	s_all
{
	char	*name_term;
	t_lst	*lst;
}				t_all;

// struct termios {
//     tcflag_t c_iflag;
//     tcflag_t c_oflag;
//     tcflag_t c_cflag;
//     tcflag_t c_lflag;
//     cc_t c_cc[NCCS];
//     speed_t c_ispeed;
//     speed_t c_ospeed;
// };

/*
**	ft_term_change.c
*/
int		ft_init_termios(struct termios *term, t_all *all);
int		ft_end_termios(struct termios *term);
/*
**	ft_print_select.c
*/
void	ft_print_select(char *str);
void	ft_print_list_select(t_all *all);
/*
**	ft_myputchar.c
*/
int		ft_myputchar(int c);
/*
**	ft_select.c
*/
int		ft_brain_select(char **argv, t_all *all);
/*
**	ft_list.c
*/
void	ft_arg_to_list(char **argv, t_all *all);

#endif
