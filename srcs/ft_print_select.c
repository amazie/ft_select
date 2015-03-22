/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_select.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 15:18:19 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/22 15:13:11 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	This function print the string.
*/
void	ft_print_select(char *str)
{
	tputs(str, 1, ft_myputchar);
	tputs("\n", 1, ft_myputchar);
}

/*
**	This function will underline the selected link.
*/
char	*ft_under_line(char *str)
{
	char *tmp;

	tmp = ft_strjoin(tgetstr("us", NULL), str);
	tmp = ft_strjoin_free(tmp, tgetstr("ue", NULL));
	return (tmp);
}

/*
**	This function print the list
*/
void	ft_print_list_select(t_all *all)
{
	t_lst	*tmp;
	char	*str;

	tmp = NULL;
	if (all->lst->line == 1)
	{
		str = ft_under_line(all->lst->value);
		ft_print_select(str);
		free(str);
	}
	tmp = all->lst->next;
	while (tmp != all->lst)
	{
		if (tmp->line == 1)
		{
			str = ft_under_line(tmp->value);
			ft_print_select(str);
			free(str);
		}
		else
			ft_print_select(tmp->value);
		tmp = tmp->next;
	}
}
