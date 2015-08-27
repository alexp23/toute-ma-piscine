/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 20:29:44 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 21:26:17 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	char *str;
	str = ft_strcapitalize(av[1]);
	printf("%s", str);
	return (0);
}
