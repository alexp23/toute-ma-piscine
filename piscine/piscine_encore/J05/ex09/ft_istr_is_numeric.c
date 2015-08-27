/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istr_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 21:59:25 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 22:12:06 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;

	i = ft_str_is_numeric(av[1]);
	printf("%d", i);
	return (0);
}

