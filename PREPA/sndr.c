#include <unistd.h>

void ft_putstr(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int k;

	i = 0;

	k = 0;
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
				k = 1;
			}
			i++;
		}
			ft_putstr(av[1]);
	}
	write (1, "\n", 1);
}

		
