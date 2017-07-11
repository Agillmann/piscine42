#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strupcase(char *str)
{
    printf("je suis la %s\n", str );
    int cpt;

    cpt = 0;
    while (str[cpt] != '\0')
    {
        if ('a' <= str[cpt] && str[cpt] <= 'z')
        {
            printf("%c\n", str[cpt]);
            str[cpt] = str[cpt] - 32;
        }
        cpt++;
    }

    return str;
}


int main() {
    char * s= "coucou";
    s = ft_strupcase(s);
    printf("%s\n",s );
    return 0;
}
