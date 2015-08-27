/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 16:30:33 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 17:02:49 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 65 && str[i] < 90)
			str[i]++;
		else if (str[i] == 90)
			str[i] = 'A';
		if (str[i] >= 97 && str[i] < 122)
			str[i]++;
		else if (str[i] == 122)
			str[i] = 'a';
		ft_putchar(str[i]);
		i++;	
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2) 
		return (0);
	ft_rotone(argv[1]);
	return (0);
}
