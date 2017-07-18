#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int argc, char *argv[]) {
    int i;
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int *range;
    int tmp;
    i = 0;
    (void)argc;

    if ((tmp = ft_ultimate_range(&range, min, max)) == 0)
        return (0);
    while(i < tmp)
    {
        printf("%d ", range[i]);
        i++;
    }
    return (0);
}
