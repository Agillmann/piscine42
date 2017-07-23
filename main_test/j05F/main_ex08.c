#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strupcase(char *str);

int		main(int ac, char *av[])
{
//	char *b = "abcd";
    (void)ac;
//	char *c = "ABCfefw";
	printf("%s\n", ft_strupcase(av[1]));
	return (0);
}
