#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_capitalize(char *str);

int		main(int ac, char *av[])
{
    (void)ac;
	printf("%s\n", ft_capitalize(av[1]));
	return (0);
}
