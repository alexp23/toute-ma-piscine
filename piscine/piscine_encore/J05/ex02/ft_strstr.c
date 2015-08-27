/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 21:53:13 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 15:06:02 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i_str;
	int i_to_find;

	i_str = 0;
	i_to_find = 0;
	while (str[i_str])
	{
		if (to_find[i_to_find] == str[i_str])
		{
			i_to_find++;
			i_str++;
			if (to_find[i_to_find] == '\0')
			{
				printf("OK, chaine de caracteres trouve");
				return ("OK, chaine de caracteres trouve");
			}
		}
		else 
		{
			i_to_find = 0;
			i_str ++;
		}
	}
	printf("Pas trouve, desole, algo peut etre faux");	
	return ("Pas trouve, desole, algo peut etre faux");
}


int		main(void)
{
	char *str = "bonjour, test du tofind, hope it work";
	char *to_find = "du tofind";
	ft_strstr(str, to_find);
	return (0);
}
