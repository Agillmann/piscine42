#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *tmp;
    int i;
    int len;

    if (min >= max)
        return NULL;
    len = max - min;
    if (NULL == (tmp = (int *)malloc(sizeof(int) * len)))
        return (tmp);
    i = 0;
    while (i < len)
    {
        tmp[i] = min;
        min ++;
        i ++;
    }

    return (tmp);
}
