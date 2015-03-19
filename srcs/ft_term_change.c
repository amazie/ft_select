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
int		ft_init_termios(t_all *all)
{
	all->term.c_lflag &= ~(ICANON);
	all->term.c_lflag &= ~(ECHO);
	all->term.c_cc[VMIN] = 1;
	all->term.c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSADRAIN, (&all->term)) == -1)
		return (0);
	return (1);
}

/*
**	This function will reset the shell with default's configuration
*/
int		ft_end_termios(t_all *all)
{
	if (tcgetattr(0, (&all->term)) == -1)
		return (-1);
	all->term.c_lflag = (ICANON | ECHO);
	if (tcsetattr(0, 0, (&all->term)) == -1)
		return (-1);
	return (0);
}
