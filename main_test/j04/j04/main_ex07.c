#include <stdio.h>

int		ft_find_next_prime(int index);

int		main(void)
{
	int a = 17;
	int b = 12;
	int c = 0;
	int d = 1;
	int e = -1;
	int res = ft_find_next_prime(a);
	
	printf("%d\n",res);
	res=0;

	res = ft_find_next_prime(b);
	printf("%d\n",res);
	res=0;

	res = ft_find_next_prime(c);
	printf("%d\n",res);
	res=0;

	res = ft_find_next_prime(d);
	printf("%d\n",res);
	res=0;
	res = ft_find_next_prime(e);
	printf("%d\n",res);
	res=0;
}
