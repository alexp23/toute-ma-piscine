/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 11:48:56 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 12:04:01 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(void)
{
	int nb;

	nb = ft_strlen("12rxdtyftikrtuioittuilqwertyuiopp;lkjhgfdsazxcvbnm,../qazwsxedcrfvtgn;hgfdsdjklgfc  vbg g g d dg3456789");
	printf("%d", nb);
	return (0);
}
