#include <stdio.h>
/*
#include <stdlib.h>
#include <string.h>
*/


char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char a[] = "coucou";
	char b[] = "salut";
	char *res;
	
	res = ft_strcpy(a, b);
/*	res = strcpy(a,b); */
	printf("%s",res);

	return (0);
}
