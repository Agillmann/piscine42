#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(int ac, char *av[])
{
	(void)ac;
	(void)av;	

	char a[100] = "";	
	char b[100] = "";

	strcpy(a,"abcde");
	strcpy(b,"1234567");

	char c[100] = "";	
	char d[100] = "";

	strcpy(c,"abcde");
	strcpy(d,"1234567");

	printf("my strlcat : ");	
	
//	printf("%s\n",ft_strlcat(av[1],av[2],atoi(av[3])));
//	printf("%s",strlcat(av[1],av[2],atoi(av[3])));

	printf("%u\n",ft_strlcat(a, b, 4));
	printf("%lu",strlcat(c, d, 4));

	return (0);
}
