/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 20:02:31 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/17 20:03:08 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void 	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int 	main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}
