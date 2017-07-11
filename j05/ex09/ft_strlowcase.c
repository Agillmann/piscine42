char    *ft_strlowcase(char *str)
{
    int cpt;

    cpt = 0;
    while (str[cpt] != '\0')
    {
        if ('a' <= str[cpt] && str[cpt] <= 'z')
        {
            str[cpt] = str[cpt] + 32;
        }
        cpt++;
    }

    return str;
}
