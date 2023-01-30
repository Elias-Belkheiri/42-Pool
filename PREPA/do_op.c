#include <stdio.h>
#include <stdlib.h>
int main(int arc, char **arv)
{
	int	a;
	int b;

	if (arc == 4)
	{
		a = atoi(arv[1]);
		b = atoi(arv[3]);
		if (arv[2][0] == '+')
			printf("%d", a + b);
	}
}

