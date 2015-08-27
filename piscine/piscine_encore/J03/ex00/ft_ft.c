/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 02:10:15 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 03:46:09 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{

	*nbr = 42;
	printf("%d  \\    %d     \n", nbr,  *nbr );

}

int 	main(void)
{
	int nb;

	nb = 14;
	printf ("%d     %d\n", nb, &nb);
	ft_ft(&nb);
	printf ("%d     %d", nb, &nb);

	}
