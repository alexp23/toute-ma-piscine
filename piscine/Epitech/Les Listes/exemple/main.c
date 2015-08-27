/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:52:07 by vpelissi          #+#    #+#             */
/*   Updated: 2015/05/07 22:04:04 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	t_list *list;

	list = NULL;

	ft_put_in_list(&list, "thor", "Bocalien");
	ft_put_in_list(&list, "zaz", "Bocalien");
	ft_put_in_list(&list, "tintin", "Bocalien");
	ft_put_in_list(&list, "gargamel", "Bocalien");
	ft_put_in_list(&list, "ns", "Fondateur");
	printf("#------------------$42$-------------------#\n");
	printf("creation liste\n");
	ft_show_list(list);
	printf("#------------------$42$-------------------#\n");
//	printf("ns to krp\n");
//	ft_list(list, "ns", "krp");
//	ft_show_list(list);
	printf("#------------------$42$-------------------#\n");
//	printf("sup dernier element\n");
//	ft_sup_last_element_list(list);
//	ft_show_list(list);
	printf("#------------------$42$-------------------#\n");
//	printf("sup premier element\n");
//	ft_sup_frist_element_list(&list);
//	ft_show_list(list);
	printf("#------------------$42$-------------------#\n");
	printf("sup element 2\n");
	ft_sup_this_element_list(list, 2);
	ft_show_list(list);
	printf("#------------------$42$-------------------#\n");
	return (0);
}
