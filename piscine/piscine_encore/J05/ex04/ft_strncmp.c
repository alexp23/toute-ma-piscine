/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 19:57:03 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 20:22:09 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *str1 = "test ecri re blabla";
	char *str2 = "test ecr7 dgmdg  |  zaz <3";
	
	// test
	int i = ft_strncmp(str1, str2, 9);
	printf("%d", i);
	return (0);
}
