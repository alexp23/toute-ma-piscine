/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 17:18:11 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 18:37:07 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	char n;

	n = '\n';
	write(1, &c, 1);
	write(1, &n, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (s2[i2])
	{
		if (s1[i] == s2[i2])
		{
			i++;
			if (s1[i] == '\0')
			{
				ft_putchar('1');
				return ;
			}
		}
		i2++;
	}
	ft_putchar('0');
}

int		main(int argc, char **argv)
{
	char c;

	c = '\n';
	if (argc != 3)
	{
		write(1, &c, 1);
		return (0);
	}
	ft_hidenp(argv[1], argv[2]);
	return (0);
}
