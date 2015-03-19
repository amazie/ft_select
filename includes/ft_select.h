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


typedef struct	s_all
{
	struct termios term;
	char	*name_term;
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
int		ft_init_termios(t_all *all);
int		ft_end_termios(t_all *all);

#endif
