/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyhook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 18:58:30 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/22 19:28:06 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_space_key(t_all *all)
{
	t_lst	*tmp;

	tmp = all->lst;
	while (tmp->line != 1)
		tmp = tmp->next;
	if (tmp->select == 0)
		tmp->select = 1;
	else
		tmp->select = 0;
	tmp->line = 0;
	tmp->next->line = 1;
}

int		ft_keyhook(t_all *all)
{
	char	*buffer[5];

	ft_bzero(buffer, 5);
	read(0, buffer, 4);
	if (*(unsigned int *)buffer == ESC_KEY)
			return (0);
	if (*(unsigned int *)buffer == DOWN_KEY)
		ft_move_down(all);
	if (*(unsigned int *)buffer == UP_KEY)
		ft_move_up(all);
	if (*(unsigned int *)buffer == SPACE_KEY)
		ft_space_key(all);
	ft_clear_screen();
	ft_print_list_select(all);
	return (1);
}