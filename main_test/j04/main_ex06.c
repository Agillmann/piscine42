#include <stdio.h>

int		ft_is_prime(int index);

int		main(void)
{
	int a = 19;
	int b = 12;
	int c = 0;
	int d = 1;
	int e = -19;
	int res = ft_is_prime(a);
	
	printf("%d\n",res);
	res=0;

	res = ft_is_prime(b);
	printf("%d\n",res);
	res=0;

	res = ft_is_prime(c);
	printf("%d\n",res);
	res=0;

	res = ft_is_prime(d);
	printf("%d\n",res);
	res=0;
	res = ft_is_prime(e);
	printf("%d\n",res);
	res=0;
}
