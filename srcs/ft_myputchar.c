/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myputchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 20:17:25 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/25 20:17:27 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
**	This putchar was created to work as the original with tputs,
**	And the output was changed because we can't print on the main output.
*/
int		ft_myputchar(int c)
{
	return (write(2, &c, 1));
}
