/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_change.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 18:12:09 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/19 18:12:11 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	This function will modify the shell behavement.
*/
int		ft_init_termios(struct termios *term, t_all *all)
{
	if ((all->name_term = getenv("TERM")) == NULL)
		return (0);
	if (tgetent(NULL, all->name_term) == -1)
		return (0);
	if (tcgetattr(0, term) == -1)
		return (0);
	term->c_lflag &= ~(ICANON | ECHO);
	term->c_cc[VMIN] = 1;
	term->c_cc[VTIME] = 0;
	if (tcsetattr(0, 0, term) == -1)
		return (0);
	return (1);
}

/*
**	This function will reset the shell with default's configuration
*/
int		ft_end_termios(struct termios *term)
{
	term->c_lflag |= (ICANON | ECHO);
	if (tcsetattr(0, 0, term) == -1)
		return (0);
	return (1);
}
