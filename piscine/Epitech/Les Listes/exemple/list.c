/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:52:46 by vpelissi          #+#    #+#             */
/*   Updated: 2015/08/26 07:38:36 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		ft_put_in_list(t_list **list, void *name, void *level)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (0);
	element->name = name;
	element->level = level;
	element->next = *list;
	*list = element;
	return (0);
}

int		ft_list(t_list *list, char *old, char *new)
{
	while (list != NULL)
    {
        if (strcmp(list->name, old) == 0)
			list->name = new;
        list = list->next;
    }
	return 0;
}

int		ft_sup_last_element_list(t_list *list)
{
	while (list != NULL)
	{
		if (list->next->next == NULL)
			list->next = NULL;
		list = list->next;
	}
	return (0);
}

int		ft_sup_this_element_list(t_list *list, int gps)
{
	t_list 	*tmp;
	int 	i;

	i = 0;
	tmp = list;
	while (list != NULL)
	{
		printf("42\n");
		if (i == gps)
			tmp->next = list->next;
		tmp = list;
		list = list->next;
		i++;
	}
	return (0);
}

int		ft_sup_frist_element_list(t_list **list)
{
	t_list *tmp;

	tmp =  (*list)->next;
	free(*list);
	(*list) = tmp;
	return (0);
}

int		ft_nb_element_in_my_list(t_list *list)
{
	int i;

	i = 0;
	while (list != NULL)
	{
		printf("%d\n", i);
		i++;
		list = list->next;
	}
	return (i);
}

void	ft_show_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putendl(list->name);
		list = list->next;
	}
}
