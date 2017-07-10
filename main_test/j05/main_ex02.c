#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char a[] = "abcdefgabcde";
	char b[] = "g";
	char *res;
	
//	res = ft_strstr(a, b, n);
	res = strstr(a,b); 
	printf("%s",res);

	return (0);
}
