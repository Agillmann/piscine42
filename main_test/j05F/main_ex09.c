#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int		main(int ac, char *av[])
{
//	char *b = "abcd";
    (void)ac;
//	char *c = "ABCfefw";
	printf("%s\n", ft_strlowcase(av[1]));
	return (0);
}
