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
	// ft_putchar(start);
	while (i < (lc - 2))
	{
		ft_putchar(fill);
		i++;
	}

	/*
	if (lc > 1)
	{
		ft_putchar(end);
	}



*/

	ft_putchar('\n');
}

/*
void	rush(int x, int y)
{
	int	i;

	i = 0;
	if(x > 1 && y > 1)
}
*/
int	main(void)
{
	ft_print_line('o', '_', 'o', 0);
	//ft_print_line('o', ' ', 'o', 10);
	//ft_print_line('o', ' ', 'o', 10);
	ft_print_line('o', '_', 'o', 10);
	ft_print_line('o', '_', 'o', 10);
	return (0);
}
