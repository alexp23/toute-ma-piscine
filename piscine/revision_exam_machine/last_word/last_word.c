/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 13:13:41 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/28 13:59:52 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ')
		i--;
	while (str[i] != ' ' && str[i] != 0)
		i--;
	i++;
	while (str[i] && str[i] != ' ')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	last_word(argv[1]);
	return (0);
}
