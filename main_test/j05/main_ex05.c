#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	(void)argc;

	printf("my strstr : %s\n",ft_strstr(argv[1],argv[2]));
	printf("%s\n",strstr(argv[1],argv[2]));
	return (0);
}
