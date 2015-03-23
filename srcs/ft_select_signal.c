/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_signal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 15:54:53 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/23 19:54:54 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_signal(void)
{
	signal(SIGINT, ft_interrupt);
	signal(SIGSEGV, ft_interrupt);
	signal(SIGTSTP, ft_sig_stop);
	signal(SIGSTOP, ft_sig_stop);
	signal(SIGCONT, ft_sig_cont);
}

void	ft_sig_stop(int i)
{
	t_all *all = NULL;
	char	cp[2] = {all->term->c_cc[VSUSP], 0};
	
	(void)i;
	// all = NULL;
	all = ft_stock(all, 1);
	ft_end_termios(all);
	signal(SIGTSTP, SIG_DFL);
	signal(SIGSTOP, SIG_DFL);
	ioctl(0, TIOCSTI, cp);
}

void	ft_sig_cont(int i)
{
	t_all *all;

	all = NULL;
	(void)i;
	all = ft_stock(all, 1);
	ft_init_termios(all);
	signal(SIGTSTP, ft_sig_stop);
}

void	ft_interrupt(int i)
{
	t_all *all;
	(void)i;

	all = NULL;
	all = ft_stock(all, 1);
	ft_end_termios(all);
	exit(0);
}