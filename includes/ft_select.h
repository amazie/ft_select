/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 15:42:48 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/22 21:03:25 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H
# include "libft.h"
# include <signal.h>
# include <term.h>
# include <termios.h>
# include <termcap.h>
# define BUFFER *(unsigned int *)buffer

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
	LEFT_KEY = 4479771,
	RIGHT_KEY = 4414235,
	UP_KEY = 4283163,
	DOWN_KEY = 4348699,
	ESC_KEY = 27,
	SPACE_KEY = 32,
	DEL_KEY = 127,
	RET_KEY = 10,
	SUP_KEY = 2117294875,
	HOME_KEY = 4741915,
	END_KEY = 4610843,
	PAGE_UP_KEY = 2117425947,
	PAGE_DOWN_KEY = 2117491483,
	TAB_KEY = 9,
}				t_enum;

typedef struct	s_all
{
	char	*name_term;
	int		nb_col;
	int		nb_row;
	int		enter;
	char	**ret_tab;
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
int		ft_end_termios(struct termios *term, t_all *all);
/*
**	ft_print_select.c
*/
void	ft_print_list_select(t_all *all);
void	ft_under_line(char *str);
void	ft_select_underline(char *str);
void	ft_select_behavement(t_lst *lst);
void	ft_print_select(char *str);
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
/*
**	ft_select_misc.c 
*/
void	ft_clear_screen(void);
/*
**	ft_keyhook.c
*/
int		ft_keyhook(t_all *all);
/*
**	ft_moves.c
*/
void	ft_move_up(t_all *all);
void	ft_move_down(t_all *all);
/*
**	ft_action.c
*/
void	ft_space_key(t_all *all);
int		ft_delete(t_all *all);
/*
**	ft_enter.c
*/
void	ft_print_enter(t_all *all);
void	ft_stock_tab(t_all *all);
void	ft_return_key(t_all *all);

#endif
