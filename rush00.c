/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine.aichi <yasmine.aichi@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:13:56 by yasmine.aichi     #+#    #+#             */
/*   Updated: 2025/07/26 16:45:52 by yasmine.aichi    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_line(char start, char fill, char end, int lc);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		ft_print_line('o', 'a', 'o', x);
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
		ft_print_line('o', 'a', 'o', x);
	}
}
