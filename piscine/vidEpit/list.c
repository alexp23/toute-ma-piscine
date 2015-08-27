/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 18:06:56 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/20 18:23:22 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unPoinH.h"

int 	putInList(struct s_list **list, char *name, int age)
{
	struct s_list *element;

	element = malloc(sizeof(*element));
	if (element == NULL)
		return (0);
	element->name = name;
	element->age = age;
	element->next = *list;
	*list = element;
	return (0);
}

void	show_list(struct s_list *list)
{
	struct s_list *tmp;

	tmp = list;
	while (tmp != NULL)
	{
		ft_putstr(tmp->name);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}
