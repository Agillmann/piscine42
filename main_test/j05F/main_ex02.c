#include <stdio.h>

int		atoi(char *str);

int 	main(void)
{
	char *a = "422";
	char *b = "-42";
	char *c = "test";
	char *d = "		55";
	int res;

	res = atoi(a);
	printf("%d\n",res);
	res = atoi(b);
	printf("%d\n",res);
	res = atoi(c);
	printf("%d\n",res);
	res = atoi(d);
	printf("%d\n",res);
}
