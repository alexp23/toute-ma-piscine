/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste_chainee.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 20:36:21 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/25 20:36:33 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_LISTE_CHAINEE
#define H_LISTE_CHAINEE

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};

Liste *initialisation();
void insertion(Liste *liste, int nvNombre);
void suppression(Liste *liste);
void afficherListe(Liste *liste);

#endif
