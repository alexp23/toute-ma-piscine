/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 12:14:12 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/13 12:14:19 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char *str)
{
		int	counter;
		
			counter = 0;
				while (str[counter])
						{
									ft_putchar(str[counter]);
											counter++;
												}

}
