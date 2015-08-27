/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 16:38:23 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/11 18:14:55 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int nb_fac;

	if (nb > 1 && nb < 13)
	{
		nb_fac = nb * ft_recursive_factorial(nb - 1);
		return (nb_fac);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	return (0);
}
