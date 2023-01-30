#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putstr(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
}

void ft_putnbr(int a)
{
	if (a >= 0 && a < 10)
	{
		a += 48;
		ft_putchar(a);
	}
	else if (a < 0)
	{
		write (1, "-", 1);
		a *= -1;
		ft_putnbr(a);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}

int main()
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if (a % 5 == 0 && a % 3 == 0)
        {
            ft_putstr("fizz buzz");
            write (1, "\n", 1);
        }
		else if (a % 3 == 0)
		{
			ft_putstr("fizz");
			write (1, "\n", 1);
		}
		else if (a % 5 == 0)
		{
		 	ft_putstr("buzz");
			write (1, "\n", 1);
		}
		else
		{
			ft_putnbr(a);
			write (1, "\n", 1);
		}
		a++;
	}
}

