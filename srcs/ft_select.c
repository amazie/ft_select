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

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			ft_putendl(argv[i]);
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
