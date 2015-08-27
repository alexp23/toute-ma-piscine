/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 20:51:18 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/11 21:28:09 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power == 0)
		return (0);
	if (power == 1)
		return (nb);
	while (1 < power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
