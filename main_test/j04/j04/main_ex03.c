#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int a = 3;
	int b = -1;
	int c = 0;
	int d = 3;

	int res = ft_recursive_power(a,b);
	printf("%d\n",res);
	res=0;	
	res = ft_recursive_power(a,c);
	printf("%d\n",res);
	res=0;
	res = ft_recursive_power(a,d);
	printf("%d\n",res);
	res=0;
}
