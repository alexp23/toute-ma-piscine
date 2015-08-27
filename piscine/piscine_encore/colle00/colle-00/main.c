/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 11:29:16 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 12:46:52 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_colle(int x, int y);
void	print_colle(int size, char cote, char middle);
void	ft_putchar(char c);

int		ft_atoi(char *str)
{
	int i;
	int nb;
	
	i = 0;
	nb = 0;
		while (str[i])
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
			nb = nb * 10 + str[i] - 48;
			}
		i++;	
		}
	return (nb);
}

int		main(int argc, char **argv)
{
	int x;
	int y;
	
	if (argc != 3)
	{
		printf("il faut 2 parametres, retourne chez ta mere");
		return (0);
	}

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);

	ft_colle(x, y);
	return (0);
}
