/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 15:47:38 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/17 20:15:49 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int		main(void)
{
	int a;
	int b;

	a = -278534;
	b = ABS(a);
	printf("%d",b);
	return (0);
}
