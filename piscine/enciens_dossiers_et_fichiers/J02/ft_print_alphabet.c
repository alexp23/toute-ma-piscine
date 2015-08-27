/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 10:54:53 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/07 11:53:22 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c){
	write (1, &c, 1);
}

void ft_print_alphabet(void){
int letter = 'a';

	while (letter <= 122){

	ft_putchar(letter);
	letter ++;
	
	}
}
