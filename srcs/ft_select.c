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

int		ft_test_select(void)
{
	char buffer[3];

	while(42)
	{
		read(0, buffer, 3);
		if (buffer[0] == 27)
			return (0);
		else
		{
			ft_putnbr_fd(*(unsigned int *)buffer, 2);
			ft_putchar('\n');
		}
		// return (0);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	struct termios term;
	t_all	all;

	(void)argc;
	(void)argv;
	if (!ft_init_termios(&term, &all))
		return (-1);
	ft_test_select();
	if (!ft_end_termios(&term))
		return (-1);
	return (0);
}
