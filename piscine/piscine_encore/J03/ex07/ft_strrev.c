/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 13:53:45 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/24 14:22:51 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strrev(char *str)								//NE FONCTIONNE PAS 
{
	int i;
	int i_rev;
	char *str_dest;


	i = 0;
	while(str[i])
	{
		i ++;
	}
	i_rev = i - 1;
	i = 0;
	printf("test");
	while(str[i])
	{
		str_dest[i] = str[i_rev];
		i++;
		//i_rev--;
	}
	return (str_dest);
}

int		main(void)
{
	ft_putstr(ft_strrev("alex"));
	return (0);
}
