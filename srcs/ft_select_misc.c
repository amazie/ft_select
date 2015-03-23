/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_misc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 18:18:11 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/23 19:48:31 by tcoppin          ###   ########.fr       */
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
	static t_all *tmp = NULL;

	if (i == 0)
		tmp = all;
	return (tmp);
}