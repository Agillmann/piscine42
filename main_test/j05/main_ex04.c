#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char a[] = "";
	char b[] = "salut";
	unsigned int n = 2;
	char *res;
	
	printf("my strncpy : ");
	res = ft_strncpy(a, b, n);
	printf("%s \n",res);
	res = strncpy(a,b,n); 
	printf("%s",res);

	return (0);
}
