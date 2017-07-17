#include <stdio.h>

int		ft_sqrt(int index);

int		main(void)
{
	int a = 9;
	int b = -1;
	int c = 0;
	int d = 2147483648;

	int res = ft_sqrt(a);
	printf("%d\n",res);
	res=0;	
	res = ft_sqrt(b);
	printf("%d\n",res);
	res=0;
	res = ft_sqrt(c);
	printf("%d\n",res);
	res=0;
	res = ft_sqrt(d);
	printf("%d\n",res);
	res=0;
}
