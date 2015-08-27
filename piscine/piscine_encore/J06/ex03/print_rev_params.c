/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rev_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 14:38:06 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 14:49:13 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = argc - 1;
	b = 0;

	while (a > 0)
	{
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a --;
	}
	return (0);
}
