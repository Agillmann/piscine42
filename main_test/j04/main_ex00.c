#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int a = 4;
	int b = -4;
	int c = 13;
	int d = 0;

	int res = ft_iterative_factorial(a);
	printf("%d\n",res);
	res=0;	
	res = ft_iterative_factorial(b);
	printf("%d\n",res);
	res=0;
	res = ft_iterative_factorial(c);
	printf("%d\n",res);
	res=0;	
	res = ft_iterative_factorial(d);
	printf("%d\n",res);
}
