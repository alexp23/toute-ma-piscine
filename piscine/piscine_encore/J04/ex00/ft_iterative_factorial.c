/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 15:22:27 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 16:39:50 by apietrul         ###   ########.fr       */
/*                                                                            */

:/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int nb_fac;

	nb_fac = nb;
	if (nb == 1 && nb == 0)
		return (1);
	if (nb < 0 && nb > 12)
		return (0);
	while(nb > 1)
	{
		nb --;
		nb_fac = nb_fac * nb;
	}
	return (nb_fac);
}
int		main(void)
{
	int nb;
	nb = ft_iterative_factorial(9);
	printf("%d", nb);
	return (0);
}
