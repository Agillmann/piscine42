#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *a = "abc";
	char *b = "abc";
	char *c = "ABC";
	char *d = "abwd";
	int res;
		
	res = ft_strcmp(a, b);
	printf("%d\n",res);
	res = strcmp(a,b);
	printf("%d\n",res);

	res = ft_strcmp(a, c);
	printf("%d\n",res);
	res = strcmp(a,c);
	printf("%d\n",res);
	
	res = ft_strcmp(a, d);
	printf("%d\n",res);
	res = strcmp(a,d);
	printf("%d\n",res);

	return (0);
}
