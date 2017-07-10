#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char a[] = "coucou";
	char b[] = "salut";
	unsigned int n = 1;
	char *res;
	
	res = ft_strncpy(a, b, n);
//	res = strncpy(a,b,n); 
	printf("%s",res);

	return (0);
}
