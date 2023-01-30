#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int	k;
	int	sign;

	i = 0;
	k = 0;
	sign = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + (str[i] - 48);
		i++;
	}
	return (k * sign);
}

int main()
{
	int a = atoi("    -4 5");
	int b = ft_atoi("    -4 5");
	printf("%d\n", a);
	printf("%d", b);
}
