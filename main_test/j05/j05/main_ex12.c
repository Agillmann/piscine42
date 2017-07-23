#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_numeric(char *str);

int		main(int ac, char *av[])
{
    (void)ac;
	printf("%d\n", ft_str_is_numeric(av[1]));
	return (0);
}
