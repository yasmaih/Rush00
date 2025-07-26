/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nourra.agoudjil <nourra.agoudjil@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:25:36 by nourra.agoudj     #+#    #+#             */
/*   Updated: 2025/07/26 20:18:56 by nourra.agoudj    ###   ########.fr       */
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
	if (x > 0 && y > 0)
	{
		ft_print_line('/', '*', '\\', x);
	}
	if (y > 2)
	{
		while (i < (y - 2))
		{
			ft_print_line('*', ' ', '*', x);
			i++;
		}
	}
	if (y > 1)
	{
		ft_print_line('\\', '*', '/', x);
	}
}
