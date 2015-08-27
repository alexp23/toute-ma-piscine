/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 21:07:26 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 21:19:54 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liste.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list nb;

	nb.nombre = 20;
	printf("%d", nb.nombre);
	return (0);
}
