/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 00:58:57 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 01:37:02 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int letter;

	letter = 126;
	while (letter >= 32)
	{
		ft_putchar(letter);
		letter--;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
