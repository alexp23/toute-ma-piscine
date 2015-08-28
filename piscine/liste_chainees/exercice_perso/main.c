/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 10:53:26 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/28 11:04:29 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "list.h"

int		main(void)
{
	t_list liste1;
	t_list liste2;
	
	liste1->next = &liste2;
	liste2->next = NULL;

	liste1->nom = "nom";
	liste1->prenom = "prenom";

	printf("%s", liste1->nom);

	return (0);
}
