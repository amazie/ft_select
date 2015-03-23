/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 15:14:33 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/23 15:14:37 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	ft_deselect_all will unselect all elements if all elements are selected.
*/
void	ft_deselect_all(t_all *all)
{
	t_lst	*tmp;

	all->lst->select = 0;
	tmp = all->lst->next;
	while (tmp != all->lst)
	{
		tmp->select = 0;
		tmp = tmp->next;
	}
}

/*
**	ft_select_all will select all elements if one element isn't selected
**	else if all elements are selected ft_deselect_all is call.
*/
void	ft_select_all(t_all *all)
{
	t_lst	*tmp;
	int		i;

	i = 0;
	if (all->lst->select == 0)
	{
		all->lst->select = 1;
		i = 1;
	}
	tmp = all->lst->next;
	while (tmp != all->lst)
	{
		if (tmp->select == 0)
		{
			tmp->select = 1;
			i = 1;
		}
		tmp = tmp->next;
	}
	if (!i)
		ft_deselect_all(all);
}
