#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;

	}
	s1[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char *p;

	p = malloc(ft_strlen(src) + 1);
	if (p == NULL)
		return (NULL);
	ft_strcpy(p, src);
	return (p);
}

int main()
{
	printf("%s", ft_strdup("Hello There"));
}
