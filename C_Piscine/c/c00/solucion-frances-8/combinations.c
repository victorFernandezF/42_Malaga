#include <unistd.h>


/*
 0 < n < 10

 n == 2:
 01, 02, 03,..., 09,...,12,...,79, 89
*/


void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_screen(int *t, int size)
{
	int i;
	int islower;

	i = 1;
	islower = 1;
	while (i < size)
	{
		if (t[i - 1] >= t[i])
			islower = 0;
		i++;
	}
	if (islower)
	{
		i = 0;
		while (i < size)
			ft_putchar(t[i++] + '0');
		if (t[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	if (n == 1)
		while (i < 10)
			ft_putchar(i++ + '0');
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print_screen(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}

int     main(void)
{
    ft_print_combn(3);
    return(0);
}