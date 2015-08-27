/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphabet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 17:03:31 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 17:23:25 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_alphabet(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (count <= (str[i] - 97))
			{
				ft_putchar(str[i]);
				count++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (count <= (str[i] - 65))
			{
				ft_putchar(str[i]);
				count++;
			}
		}
		else
			ft_putchar(str[i]);
		count = 0;
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	print_alphabet(av[1]);
	return (0);
}
