/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 19:23:22 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/22 19:25:06 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_move_up(t_all *all)
{
	t_lst	*tmp;

	tmp = all->lst;
	while (tmp->line != 1)
		tmp = tmp->next;
	tmp->line = 0;
	tmp->prev->line = 1;
}

void	ft_move_down(t_all *all)
{
	t_lst	*tmp;

	tmp = all->lst;
	while (tmp->line != 1)
		tmp = tmp->next;
	tmp->line = 0;
	tmp->next->line = 1;
}
