#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int arc, char **arv)
{
	int i;
	char b;

	i = 0;
	if (arc == 2)
	{
	while(arv[1][i])
	{
		b = arv[1][i];
		if (arv[1][i] >= 'a' && arv[1][i] <= 'z')
		{
			arv[1][i] = 'm' + ('n' - b);
		}
		else if (arv[1][i] >= 'A' && arv[1][i] <= 'Z')
		{
			arv[1][i] = 'M' + ('N' - b);
		}
		i++;
	}
	ft_putstr(arv[1]);
	}
	write (1, "\n", 1);
}
