/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 18:07:03 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/12 20:26:59 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strstr(char *str, char *to_find)
{
		int count_str;
		int count_to_find;

		count_str = 0;
		count_to_find = 0;
	
	while(to_find[count_to_find] != '\0' || str[count_str] != '\0')
	{
		printf("%d", count_str);
		printf("%s","  " );

		if (to_find[count_to_find] == str[count_str])
		{
			count_to_find++;
			count_str++;

			if  (to_find[count_to_find] == '\0')
				return (to_find);
			else
				count_to_find = 0;
			
		
		if (to_find[count_to_find] != str[count_str])
		{	
			count_str++;	
		}
		}
	}
	return (0);
}
int 	main(void)
{
	char str[] = "coucou tu veux voir ma maison";
	char to_find[] = "cou";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
