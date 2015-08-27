/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 11:31:20 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/22 14:15:26 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

t_list		*ft_create_elem(void *data, char *data2)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->data = data;
	element->data2 = data2;
	element->next = NULL;
	return (element);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_show_list(t_list *list)
{
	while(list != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *list = ft_create_elem("thor", '1');
	ft_show_list(list);
	return (0);
}
