#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	
	(void)argc;
	char *res;
	
	printf("my strcpy : ");
	res = ft_strcpy(argv[1], argv[2]);
   	printf("%s\n", res);
	res = strcpy(argv[1], argv[2]);
	printf("%s", res);

	return (0);
}
