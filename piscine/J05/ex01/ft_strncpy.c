/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 09:49:17 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/12 16:46:10 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index] != '\0' || index <= n )
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}
