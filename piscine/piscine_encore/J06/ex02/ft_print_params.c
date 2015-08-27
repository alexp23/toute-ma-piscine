/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 14:09:56 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 14:36:11 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int i2;

	i = 1;
	i2 = 0;
	while (i < argc)
	{
		while (argv[i][i2])
		{
			ft_putchar(argv[i][i2]);
			i2++;
		}
		ft_putchar('\n');
		i2 = 0;
		i++;
	}
	return (0);
}
