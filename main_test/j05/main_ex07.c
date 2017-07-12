#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	unsigned int n = 5;
	char *a = "abcde";
	char *b = "abcd";
//	char *c = "ABCfefw";
	int res;
	
	printf("my strncmp : ");	
	res = ft_strncmp(a,b,n);
	printf("%d\n",res);
	res = 0;
	res = strncmp(a,b,n);
	printf("%d\n",res);

	return (0);
}
