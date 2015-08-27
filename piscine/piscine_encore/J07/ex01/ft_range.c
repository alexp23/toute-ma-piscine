/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 17:33:02 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 18:09:22 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
#include <stdlib.h>
#include <stdio.h>

int 	*ft_range(int min, int max)
{
	if (min >= max)
		return (NULL);
	
	int	*tab_int;
	int i;

	i = 0;
	tab_int = (int*)malloc(sizeof(*tab_int) * (max - min));
	while (min <= max)
	{
		tab_int[i] = min; 
		min++;
		i ++;
	}	
	return (tab_int);
}

int		main()
{
	int *tab_int;
	int nb;
	int min;
	int max;

	min = 5;
	max = 10;

	tab_int = ft_range(min, max);
	while(min <= max + 5)
	{
		printf("%d", tab_int[nb]);
		min++;
		nb++;
	}
	return (0);
}
