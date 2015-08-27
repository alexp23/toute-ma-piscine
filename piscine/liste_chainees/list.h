/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 13:46:57 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/27 11:45:36 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct 	s_list
{
	char	*str;
	char	*name;
	struct s_list	*next;
}				t_list;

typedef struct	s_premier
{
	t_list *t_premier;
} 				t_premier;
#endif
