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
			ft_putstr("It's ALIIIIIIVE\n");
		else if (buffer[0] == 4)
		{
			ft_putstr("ole\n");
			return (0);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_all	all;

	(void)argc;
	(void)argv;
	if ((all.name_term = getenv("TERM")) == NULL)
		return (-1);
	if (tgetent(NULL, all.name_term) == -1)
		return (-1);
	ft_test_select();
  // remplis la structure termios des possibilités du terminal.
	if (!ft_init_termios(&all))
		return (-1);
	if (tcgetattr(0, (&all.term)) == -1)
		return (-1);
	return (ft_end_termios(&all));
}
