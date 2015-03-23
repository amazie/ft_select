/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_misc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 18:18:11 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/23 18:13:31 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	This function clear the terminal screen.
*/
void	ft_clear_screen(void)
{
	tputs(tgetstr("cl", NULL), 1, ft_myputchar);
}

t_all	*ft_stock(t_all *all, int i)
{
	static t_all *tmp;

	if (i == 0)
		tmp = all;
	return (tmp);
}