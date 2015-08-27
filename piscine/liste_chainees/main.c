/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 13:50:07 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 12:44:08 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

void	afficherListe(t_list liste);

int		main(void)
{
	char *nom1;
	char *str1;
	char *nom2;
	char *str2;

	nom1 = "Premier element";
	nom2 = "Le suivant";
	str1 = "Je suis le premier";
	str2 = "et moi le second";
	
	t_list elem1;
	t_list elem2;
	t_list *element1;
	t_list *element2;

	element1 = &elem1;
	element2 = &elem2;

	element1->name = nom1;
	element2->name = nom2;
	element1->str = str1;
	element2->str = str2;
	element1->next = element2;
	element2->next = NULL;

	afficherListe(*element1);

	/*printf("%s\n%s\n%s\n%s\n", element2->str, element2->name, element1->name, element1->str);
	element1 = element1->next;
	printf("%s", element1->name);*/
	return (0);
}

void	afficherListe(t_list liste)
{
	t_list *elem;

	elem = &liste;
	while (elem != NULL)
	{
		printf("%s", elem->name);
		elem = elem->next;
	}
}

void	ajouter_liste(t_list **list, name, str)
{
	t_list *elem;

	elem = &liste;
	while (elem != NULL)
	{
		elem = elem->next;
	}
	if (elem == NULL)
	{
		
	}
}













