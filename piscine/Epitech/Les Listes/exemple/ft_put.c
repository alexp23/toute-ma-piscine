/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 23:20:45 by vpelissi          #+#    #+#             */
/*   Updated: 2015/05/06 16:14:45 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"
#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void		ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
