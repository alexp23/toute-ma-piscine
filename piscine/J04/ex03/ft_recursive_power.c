/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 22:09:14 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/11 23:07:58 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	if (power == 0)
		return (0);
	if (power == 1)
		return (nb);
	return (0);
}
