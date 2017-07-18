#include <stdio.h>
char *ft_strdup(char *src);

int main(int argc, char *argv[]) {
    (void)argc;
    printf("%s \n%s\n", argv[1], ft_strdup(argv[1]));
    return (0);
}
