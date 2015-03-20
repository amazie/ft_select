/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 15:40:15 by tcarmet           #+#    #+#             */
/*   Updated: 2015/03/17 16:01:45 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"
#include <stdio.h>

// int		ft_test_select(void)
// {
// 	char buffer[3];

// 	while(42)
// 	{
// 		read(0, buffer, 3);
// 		if (buffer[0] != 27)
// 			return (0);
		
// 	}
// 	return (0);
// }

int		ft_brain_select(char **argv, t_all *all)
{
	char	buffer[3];

	ft_arg_to_list(argv, all);
	// ft_print_select(argv);
	while (42)
	{
		read(0, buffer, 3);
		if (buffer[0] != 27)
			return (0);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	struct termios term;
	t_all	all;
	(void)argc;
	all.lst = NULL;
	if (!ft_init_termios(&term, &all))
		return (-1);
	if (argc >= 2)
		ft_brain_select(argv, &all);
	if (!ft_end_termios(&term))
		return (-1);
	return (0);
}
