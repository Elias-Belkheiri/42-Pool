#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int main()
{
	char i;
	char y;
	int n;

	i = 'a';
	y = 'B';
	n = 0;
	while (n < 13)
	{
		ft_putchar(i);
		ft_putchar(y);
		i += 2;
		y += 2;
		n++;
	}
	return 0;
}
