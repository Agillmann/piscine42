#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char *argv[])
{

 	(void)argc;
	printf("%s %s %d\n", argv[1], argv[2], atoi(argv[3]));
	printf("my strncpy: %s\n",  ft_strncpy(argv[1], argv[2], atoi(argv[3])));
	printf("%s \n", strncpy(argv[1], argv[2], atoi(argv[3])));

	return (0);
}
