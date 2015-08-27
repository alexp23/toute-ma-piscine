/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 09:53:29 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/26 12:42:01 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_colle(int size, char cote, char middle);
void	ft_putchar(char c);

void	ft_colle(int x, int y)
{
	int line;
	int col;
	
	line = 1;
	col = 1;

	while (col <= y)
	{
			if (col == 1 || col == y)
				print_colle(x, 'o', '-');
			else
				print_colle(x, '|', ' ');
			col++;
		}
}

void	print_colle(int size, char cote, char middle)
{
	int i;

	i = 1;
	while (i <= size)
	{
		if (i == 1 || i == size)
			ft_putchar(cote);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}
