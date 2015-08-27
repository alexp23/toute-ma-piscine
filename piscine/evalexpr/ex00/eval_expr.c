/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 23:27:01 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/20 12:42:13 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	eval_expr(char *str)
{
	int i;
	int nb;

	i == 0;	
	while (str[i] != '\0')
	{
		nb = str[i];
		if (nb >= '0' && nb <= < 9)
		{
			nb = getNumber(nb);
			i++
		}
		if(str[i] == ' ')
		{
			i++;
		}
		else if (str[])

	}
	return (0);
}

int 	getNumber(char c)
{
	int nb;

	nb = 'c' - 48;
	return (nb);
}

void 	ft_putcar(char c)
{
	write(1, &c, 1);
}

int 	main(int ac, char **av)
{
	if(ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
