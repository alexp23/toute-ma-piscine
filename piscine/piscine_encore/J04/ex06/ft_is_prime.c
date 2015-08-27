/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 18:24:39 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 18:43:43 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int count;

	count = nb - 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (count > 1)
	{
		if (nb % count == 0)
		{
			return (0);
			printf("pas premier");
		}
		count--;
	}
	printf("premier");
	return(1);
}

int		main(void)
{
	ft_is_prime(8);
	return (0);
}
