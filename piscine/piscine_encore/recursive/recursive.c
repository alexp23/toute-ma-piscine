/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 14:48:16 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 15:06:59 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive(long nb)
{
	if (nb <= 100000)
	{	
		printf("%ld ", nb);
		nb++;
		ft_recursive(nb);
	}
	return (0);
}

int		main(void)
{
	ft_recursive(0);
	return (0);
}
