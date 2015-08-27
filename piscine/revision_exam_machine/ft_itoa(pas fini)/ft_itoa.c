/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 15:50:35 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 16:52:59 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_lenght(int cp)
{
	int		nblen;

	if (cp == 0)
		return (1);
		nblen = 0;
		while (cp != 0)
		{
			nblen++;
			cp = cp / 10;
		}
		return (nblen);
	}

char	*ft_itoa(int nbr)
{
	char *str;
	int len;
	
	len = ft_lenght(nbr);
	str = (char *)malloc(sizeof(char) * len + 1);
	nb = 0;
	while (nbr)
	{

	}
	return (str);
}

int		main(void)
{
	int nb;

	nb = ft_lenght(123456789);
	printf("%d", nb);
	return (0);
}

