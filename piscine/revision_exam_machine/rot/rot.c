/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 21:17:26 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 23:23:29 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
# define TAB_ROT str[i]

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while(str[i])
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}

void	ft_rot(char *str, int rot)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (TAB_ROT)
	{
		if ((TAB_ROT >= 'a' && TAB_ROT <= 'z') || (TAB_ROT >= 'A' && TAB_ROT <= 'Z'))
		{
			while(count <= rot)
			{
				if (TAB_ROT == 'z')
					TAB_ROT = 'a';
				else if (TAB_ROT == 'Z')
					TAB_ROT = 'A';
				else
					TAB_ROT = TAB_ROT + 1;
				count++;
			}
		}
		ft_putchar(TAB_ROT);
		i++;
		count = 1;
	}
}

int		main(int ac, char **av)
{	
	int rot;

	if (ac != 3)
		return (0);
	rot = ft_atoi(av[1]);
	printf("%d\n", rot);
	ft_rot(av[2], rot);
	return (0);
}




