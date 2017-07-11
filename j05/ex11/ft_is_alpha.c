#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
    int cpt;

    cpt = 0;
    while (str[cpt] != '\0')
    {
        if (!((str[cpt] <= 'a' && str[cpt] <= 'z') || (str[cpt] <= 'A' && str[cpt] <= 'Z' ))) {
            return 0;
        }
        cpt ++;
    }
    return 1;
}


int main() {
    char *s = "cdizedhiuegudgeudgye";
    printf("%d\n",  ft_str_is_alpha(s));
    return 0;
}
