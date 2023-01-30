// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *a;
    int len;
    int i;
    int k;
    int j;
    
    len = 0;
    i = 0;
    k = 0;
    //Length Of The Strings
    while (i < 3)
    {
        len += ft_strlen(strs[i]);
        i++;
    }
    //Allocating
    a = (char *)malloc(len + (ft_strlen(sep) * (size - 1)));
    if (a == NULL)
    return (0);
    while (i < size)
    {
        j = 0;
        if (i < size - 1 && i != 0)
        {
        while (sep[j] != '\0')
            {
                a[k] = sep[j];
                k++;
                j++;
            }
            
        }
        j = 0;
        while (strs[i][j] != '\0')
        {
            a[k] = strs[i][j];
            k++;
            j++;
        }
        i++;
            
        }
    return (a);
}

int main() {
    char a[3][10] = {{"Hello"}, {"From"}, {"Space"}};
    char *b = "UUU";
    printf("%s", ft_strjoin(3, a, b));
}
