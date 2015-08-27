/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 15:42:39 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/22 15:52:22 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTSTR_H
# define PUTSTR_H

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;	   
	
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}					

#endif
