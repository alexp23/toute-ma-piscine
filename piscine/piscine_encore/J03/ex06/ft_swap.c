/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 12:09:26 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 13:47:59 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 24;

	printf("____________Avant___________\n");
	printf("a : %d        |       b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("____________APRES___________\n");
	printf("a : %d        |       b : %d\n", a, b);

	return (0);
}
