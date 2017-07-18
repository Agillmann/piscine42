#include <stdlib.h>
#include <stdio.h>
char *ft_concat_params(int argc, char **argv);

int main(int argc, char *argv[])
{
    char *tab;

    tab = ft_concat_params(argc,argv);
    printf("%s\n",tab );
    return (0);
}
