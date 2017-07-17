#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(int ac, char *av[])
{
	(void)ac;	
//	char *b = "salut";
//	char *res = strcat(a,b);

//	strcpy(a,"abcdef");
	printf("my strcat : ");	
	printf("%s\n",ft_strcat(av[1],av[2]));

	printf("%s",strcat(av[1],av[2]));
	return (0);
}
