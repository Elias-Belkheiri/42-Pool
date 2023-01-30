#include <unistd.h>

int main ()
{
	char *a = "abc ee";
	int i;
	char b;

	i = 0;
	while (a[i])
	{
		b = a[i];
		if (a[i] == 'z')
		{
			b = 'a';
			write (1, &b, 1);
		}
		else if (a[i] == 'Z')
		{
            b = 'Z';
            write (1, &b, 1);
		}
		else if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		{
			b = a[i] + 1;
            write (1, &b, 1);
		}
		else
			write (1, &b, 1);
		i++;
	}
}

