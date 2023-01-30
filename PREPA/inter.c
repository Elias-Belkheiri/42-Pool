#include <unistd.h>

int main(int arc, char **arv)
{
	int tab[256] = {0};
	int i;

	i = 0;
	if (arc == 3)
	{
		while (arv[2][i])
		{
			tab[(int)(arv[2][i])] = 1;
			i++;
		}
		i = 0;
		while (arv[1][i])
		{
			if (tab[(int)(arv[1][i])] == 1)
			{
				write (1, &arv[1][i], 1);
				tab[(int)(arv[1][i])] = 2;
			}
			i++;
		}
	}
}
