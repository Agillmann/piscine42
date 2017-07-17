#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int a = 4;
	int b = -4;
	int c = 13;
	int d = 0;

	int res = ft_recursive_factorial(a);
	printf("%d\n",res);
	res=0;	
	res = ft_recursive_factorial(b);
	printf("%d\n",res);
	res=0;
	res = ft_recursive_factorial(c);
	printf("%d\n",res);
	res=0;	
	res = ft_recursive_factorial(d);
	printf("%d\n",res);
}
