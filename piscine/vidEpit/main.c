/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 17:57:08 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/20 19:22:11 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unPointH.h"

int 	main()
{
	struct s_list *list;

	putInList(&list, "prenom", 42);
	putInList(&list, "Alex", 17);
	putInList(&list, "Ludovic", 21);

	return (0);
}	
