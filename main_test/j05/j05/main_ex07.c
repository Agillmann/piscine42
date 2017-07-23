#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("my strncmp : %d \n",ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d",strncmp(argv[1], argv[2], atoi(argv[3])));

	return (0);
}
