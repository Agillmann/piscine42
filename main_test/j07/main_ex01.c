#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(int argc, char *argv[]) {
    int i;
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int *tmp;
    i = 0;
    (void)argc;

    if ((tmp = ft_range(min,max)) == NULL)
        return (0);

    while(i < (max-min))
    {
        printf("%d\n", tmp[i]);
        i++;
    }
    return (0);
}
