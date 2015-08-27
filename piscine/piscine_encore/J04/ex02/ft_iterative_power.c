/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 16:59:48 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 17:34:51 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	while(power > 1)
	{
		nb = nb * nb;
		power --;
	}
	return (nb);
}

int		main(void)
{
	int nb;

	nb = ft_iterative_power(5, 2);
	printf("%d", nb);
	return (0);
}
