/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 19:06:07 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/15 19:54:50 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_concat_params(int args, char **argv)
{
	
}
void ft_putchar(char c)
{
	write(1, $c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_putstr(argv[2]);
	return 0;
}
