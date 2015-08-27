/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 17:56:06 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 19:14:53 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] == ' ' && str[i])
	{
		i++;
	}
		
	while (str[i] != ' ' && str[i])
	{	
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_first_word(av[1]);
	return (0);
}
