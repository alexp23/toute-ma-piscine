/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 15:58:40 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 16:22:30 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb < 13)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (0);
}

int		main(void)
{
	int nb;

	nb = ft_recursive_factorial(0);
	printf("%d", nb);
	return (0);
}
