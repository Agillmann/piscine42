#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range,int min, int max)
{
    int i;
    int len;
    int *tab;

    if (min >= max)
        return (0);
    len = max - min;
    if (NULL == (tab = (int *)malloc(sizeof(int) * len)))
        return (0);
    i = 0;
    while (i < len)
    {
        tab[i] = min;
        min ++;
        i ++;
    }
    *range = tab;
    return (len);
}
