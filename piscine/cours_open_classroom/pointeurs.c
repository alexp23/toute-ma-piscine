/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 22:18:38 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/14 22:23:50 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
	int nombre = 5;

	triplePointeur(&nombre);
	printf("%d", nombre);

	return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
	*pointeurSurNombre *= 3;
}
