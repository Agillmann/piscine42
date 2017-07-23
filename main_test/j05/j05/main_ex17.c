#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(int ac, char *av[])
{
	(void)ac;
	(void)av;	

	char a[100] = "";	
	char b[100] = "";

	strcpy(a,"abcde");
	strcpy(b,"12");

	char c[100] = "";	
	char d[100] = "";

	strcpy(c,"abcde");
	strcpy(d,"12");

	printf("my strcat : ");	
	
//	printf("%s\n",ft_strncat(av[1],av[2],atoi(av[3])));
//	printf("%s",strncat(av[1],av[2],atoi(av[3])));

	printf("%s\n",ft_strncat(a, b, -1));
	printf("%s",strncat(c, d, -1));

	return (0);
}
