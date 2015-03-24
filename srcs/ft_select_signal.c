/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_signal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 15:54:53 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/24 13:46:21 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"


static void	ft_sig_stop(int i)
{
	t_all	*all;
	char	cp[2];
	
	(void)i;
	all = NULL;
	all = ft_stock(all, 1);
	cp[0] = all->term->c_cc[VSUSP];
	cp[1] = 0;
	all->term->c_lflag |= (ICANON | ECHO);
	signal(SIGTSTP, SIG_DFL);
	tcsetattr(0, 0, all->term);
	tputs(tgetstr("te", NULL), 1, ft_myputchar);
	tputs(tgetstr("ve", NULL), 1, ft_myputchar);
	ioctl(0, TIOCSTI, cp);
}

static void	ft_sig_cont(int i)
{
	t_all *all;

	(void)i;
	all = NULL;
	all = ft_stock(all, 1);
	all->term->c_lflag &= ~(ICANON | ECHO);
	all->term->c_cc[VMIN] = 1;
	all->term->c_cc[VTIME] = 0;
	tcsetattr(0, 0, all->term);
	tputs(tgetstr("ti", NULL), 1, ft_myputchar);
	tputs(tgetstr("vi", NULL), 1, ft_myputchar);
	signal(SIGTSTP, ft_catch_signal);
	ft_print_list_select(all);
}

static void	ft_interrupt(int i)
{
	t_all *all;

	(void)i;
	all = NULL;
	all = ft_stock(all, 1);
	ft_end_termios(all);
	exit(0);
}

void		ft_catch_signal(int i)
{
	if (i == SIGCONT)
		ft_sig_cont(0);
	else if (i == SIGTSTP)
		ft_sig_stop(0);
	else
		ft_interrupt(0);
}

void		ft_signal(void)
{
	int i;

	i = 1;
	while (i < 32)
	{
		signal(i, ft_catch_signal);
		i++;
	}
}
