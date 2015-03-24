/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 14:48:07 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/24 15:34:46 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_resize(void)
{
	t_all *all;

	all = NULL;
	all = ft_stock(all, 1);
	
	all->nb_col = ioctl(0, TIOCGWINSZ);
	all->nb_row = ioctl(0, TIOCGWINSZ);
	ft_putnbr_fd(all->nb_col, 2);
	ft_putchar_fd('\n', 2);
	ft_putnbr_fd(all->nb_row, 2);
	ft_putchar_fd('\n', 2);
}