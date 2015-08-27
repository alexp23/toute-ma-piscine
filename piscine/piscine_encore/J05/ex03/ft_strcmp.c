/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 15:11:46 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 19:56:47 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{	int i;

	i = 0;

	while((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int 	main(void)
{
	char *str1 = "z";
	char *str2 = " ";
	int cmp;

	cmp = ft_strcmp(str1, str2);
	printf("%d", cmp);
	return (0);
}
