#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int cpt;
	cpt = 0;
	while (str[cpt])
	{
		cpt++;
	}
	return (cpt);
}


char *ft_concat_params(int argc, char **argv)
{
    char *str;
    int i;
    int j;
    int k;

    i = 1;
    k = 0;
    while (i < argc)
    {
        k += ft_strlen(argv[i]); // test \0
        i ++;
    }
    k += (argc-2); // pour \n
    if ((str = (char *)malloc(sizeof(char) * k)) == NULL)
        return (0);
    i = 1;
    j = 0;
    k = 0;
    while (i < argc )
    {
        while (argv[i][j] != '\0')
        {
            str[k] = argv[i][j];
            j++;
            k++;
        }
        i++;
        if (i != argc)
            str[k] = '\n';
        else
            str[k] = '\0';
        j = 0;
        k++;
    }
    return (str);
}
