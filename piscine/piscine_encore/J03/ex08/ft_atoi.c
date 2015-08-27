/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 14:25:08 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 14:48:25 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int nb;
	int i;
	
	nb = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{	
			nb = nb * 10 + str[i] - '0';
			i++;
		}
		else
			return (0);
	}

	return (nb);
}

int		main(void)
{
	int nb;
	int nb2;

	nb = ft_atoi("0128g8420");
	nb2 = atoi("f012345g6789");
	printf("%d        |        %d", nb, nb2);
	return (0);
}
