/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factrial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 10:20:19 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/11 15:31:54 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int nb_fac;

	nb_fac = nb;
	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	while (nb > 1 && nb < 13)
	{
		nb--;
		nb_fac = nb_fac * nb;
	}
	return (nb_fac);
}
