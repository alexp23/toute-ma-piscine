/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 10:19:11 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 11:15:01 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int		main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	
	printf("__________________AVANT________________\n");
	printf("a : %d     |     &a : %p\n", a, &a);
	printf("b : %d     |     &b : %p\n\n", b, &b);
	ft_ultimate_div_mod(&a, &b);
	printf("__________________APRES________________\n");
	printf("a : %d     |     &a : %p\n", a, &a);
	printf("b : %d     |     &b : %p\n\n", b, &b);
}
