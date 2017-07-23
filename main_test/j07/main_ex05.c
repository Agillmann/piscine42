#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab);

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	(void)argc;
//	char **tab = ft_split_whitespaces(argv[1]);

	ft_print_words_tables(ft_split_whitespaces(argv[1]));
	return (0);
}
