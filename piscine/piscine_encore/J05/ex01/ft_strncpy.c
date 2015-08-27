/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 21:16:27 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 21:23:39 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	dest = malloc(sizeof(src));
	while (i <= n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(void)
{
	char *src = "bienvenue a 42";
	char *dest;

	dest = ft_strncpy(dest, src, 9);
	ft_putstr(dest);
	return (0);
}
