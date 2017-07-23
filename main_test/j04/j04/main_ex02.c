#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int a = 2;
	int b = -1;
	int c = 3;
	int d = 0;

	int res = ft_iterative_power(a,b);
	printf("%d\n",res);
	res=0;	
	res = ft_iterative_power(a,c);
	printf("%d\n",res);
	res=0;
	res = ft_iterative_power(a,d);
	printf("%d\n",res);
	res=0;
}
