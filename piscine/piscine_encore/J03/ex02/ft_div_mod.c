/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 10:19:11 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 10:37:14 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	div = 60;
	mod = 20;
	
	printf("__________________AVANT________________\n");
	printf("div : %d     |     &div : %d\n", div, &div);
	printf("mod : %d     |     &mod : %d\n\n", mod, &mod);
	ft_div_mod(a, b, &div, &mod);
	printf("__________________APRES________________\n");
	printf("div : %d     |     &div : %d\n", div, &div);
	printf("mod : %d     |     &mod : %d\n\n", mod, &mod);
}
