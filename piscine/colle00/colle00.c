/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprakayt <sprakayt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 06:54:21 by sprakayt          #+#    #+#             */
/*   Updated: 2015/08/23 13:56:46 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int size, char begin, char middle, char end)
{
	ft_putchar(begin);
	while ((size - 1) > 1)
	{
		ft_putchar(middle);
		size--;
	}
	if (size > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_print(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			ft_print(x, 'o', '-', 'o');
	}
}
