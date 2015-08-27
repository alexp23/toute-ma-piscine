/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 20:13:56 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 06:47:41 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTE_H
# define LISTE_H
	
typedef struct	s_list
{
	char *message;
	char *name;
	s_list *next;
} 				t_list;

typedef struct 	s_prem
{
	s_list *premier;
}				s_prem;

int			ft_put_list(t_list **list, char *message, char *name);

#endif
