/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 01:43:27 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 01:52:30 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int nb;

	nb = 48;
	while (nb <= 57)
	{
		ft_putchar(nb);
		nb++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
