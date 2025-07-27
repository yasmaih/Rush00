/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nourra.agoudjil <nourra.agoudjil@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:44:18 by nourra.agoudj     #+#    #+#             */
/*   Updated: 2025/07/27 10:11:16 by nourra.agoudj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(char start, char fill, char end, int lc)
{
	int	i;

	i = 0;
	ft_putchar(start);
	while (i < (lc - 2))
	{
		ft_putchar(fill);
		i++;
	}
	if (lc > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if(((x < 0)||y < 0)||((x > 2147483647)||(y > 2147483647)))
	{
		write(1, "Merci de recommencer uniquement avec des nombres entiers positifs, compris entre 0 et 2 147 483 648", 99);
		write(1, "\n", 1);
	}	
	if (x > 0 && y > 0)
	{
		ft_print_line('o', '-', 'o', x);
	}
	if (y > 2)
	{
		while (i < (y - 2))
		{
			ft_print_line('|', ' ', '|', x);
			i++;
		}
	}
	if (y > 1)
	{
		ft_print_line('o', '-', 'o', x);
	}
}
