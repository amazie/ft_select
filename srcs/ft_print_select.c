/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_select.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 15:18:19 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/20 15:18:28 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	This function print the string
*/
void	ft_print_select(char *str)
{
	tputs(str, 1, ft_myputchar);
	tputs("\n", 1, ft_myputchar);
}

/*
**	This function print the list
*/
void	ft_print_list_select(t_all *all)
{
	t_lst	*tmp;

	tmp = NULL;
	ft_print_select(all->lst->value);
	tmp = all->lst->next;
	while (tmp != all->lst)
	{
		ft_print_select(tmp->value);
		tmp = tmp->next;
	}
}
