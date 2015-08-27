/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:52:38 by vpelissi          #+#    #+#             */
/*   Updated: 2015/05/07 15:48:42 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	char		*name;
	char		*level;
	struct s_list *next;
}				t_list;

int				ft_put_in_list(t_list **list, void *name, void *level);

int 			ft_nb_element_in_my_list(t_list *list);

int 			ft_list(t_list *list, char *old, char *new);

int				ft_sup_last_element_list(t_list *list);

int 			ft_sup_frist_element_list(t_list **list);

int 			ft_sup_this_element_list(t_list *list, int gps);

void			ft_show_list(t_list *list);

void			ft_putchar(char c);

void			ft_putstr(char const *s);

void			ft_putendl(char const *s);

#endif
