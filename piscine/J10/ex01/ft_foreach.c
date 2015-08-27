/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 20:31:01 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/18 22:33:51 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_foreach(int *tab, int length, void(*f)(int))
{
	int index;

	index = 0;
	while (i <= length)
	{
		f(tab[i]);
		i++;
	}
}
