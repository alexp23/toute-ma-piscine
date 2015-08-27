/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 21:31:02 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 21:57:13 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int is_a;
	is_a = ft_str_is_alpha(av[1]);
	printf("%d", is_a);
	return (0);
}
