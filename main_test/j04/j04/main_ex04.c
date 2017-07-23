#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int a = 7;
	int b = -1;
	int c = 0;
	int d = 3;

	int res = ft_fibonacci(a);
	printf("%d\n",res);
	res=0;	
	res = ft_fibonacci(b);
	printf("%d\n",res);
	res=0;
	res = ft_fibonacci(c);
	printf("%d\n",res);
	res=0;
	res = ft_fibonacci(d);
	printf("%d\n",res);
	res=0;
}
