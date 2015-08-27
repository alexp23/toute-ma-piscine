/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unPointH.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 17:51:13 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/20 18:27:40 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNPOINH_H
# define UNPOINTH_H

struct s_list
{
char*	name;
int		age;
struct s_list *next;
};

int 	putInList(struct s_list **list, char *name, int age);
void	show_list(struct s_list *list);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
