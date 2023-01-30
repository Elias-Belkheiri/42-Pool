#include <stdio.h>
#include <string.h>

int ft_strspn(const char *s1, const char *s2)
{
	int i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s2[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s1[j] == s2[i])
			{
				k++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (k);
}

int main () {
   const char str1[] = "4";
   const char str2[] = "ABCD";

   printf("Length of initial segment matching %lu\n", strspn(str1, str2));
	printf("Length of initial segment matching %d\n", ft_strspn(str1, str2));
   return(0);
}
