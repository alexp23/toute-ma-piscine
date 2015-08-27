/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 15:14:21 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 17:29:38 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*string;
	int		src_size;
	int		i;

	i = 0;
	while (src[src_size])
		src_size++;
		string = (char*)malloc(sizeof(*string) * (src_size) );
		while (i < src_size)
		{
			string[i] = src[i];
			i++;
		}	
		string[src_size] = '\0';
		return (string);
}

int		main(int argc, char **argv)
{	char *str;
	int nb_arg;
	while (argv[1][nb_arg])
	{
		nb_arg++;
		printf("nb_arg++       \n");
	}
	str = ft_strdup(argv[1]);
	printf("after ft_strdup   |     main\nbegin printf      |     main\n");
	printf("%s", str);
	return (0);
}
