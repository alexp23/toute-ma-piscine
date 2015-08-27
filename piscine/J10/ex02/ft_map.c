/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 22:38:01 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/18 22:58:30 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *tab_dest;

	index = 0;
	tab_dest = (int*)malloc(sizeof(*tab_dest) * (length + 1));
	while (i < length)
	{
		tab_dest[i] = f(tab[i]);
		i++;
	}
	return (tab_dest);
}
