/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 14:48:07 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/24 18:19:30 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	ft_check_size will collect the size of the terminal and if the size
**	of the terminal is too small it will clear the screen, and show the error.
*/
int		ft_check_size(t_all *all)
{
	if (all->nb_row - 2 < all->count_line)// || all->nb_col < all->count_col)
	{
		ft_clear_screen();
		ft_putendl_fd("Windows size too small.", 2);
		return (0);
	}
	else
	{
		ft_clear_screen();
		ft_print_list_select(all);
	}
	return (1);
}

void	ft_resize(void)
{
	t_all *all;
	struct winsize win;

	all = NULL;
	all = ft_stock(all, 1);
	ioctl(0, TIOCGWINSZ, &win);
	all->nb_col = win.ws_col;
	all->nb_row = win.ws_row;
	ft_check_size(all);
}
