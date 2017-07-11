char *ft_capitalize(char *str)
{
    int cpt;
    int mot;

    cpt = 0;
    mot = 0;

    while(str[cpt] != '\0')
    {
        if(str[cpt] >= 'a' || str[cpt] <= 'z')
        {
            if (mot == 0){
                str[cpt] = str[cpt] - 32;
            }
            mot = 1;
        }
        else if(str[cpt] >='A' || str[cpt] <= 'Z')
        {
            str[cpt] = str[cpt] + 32;
        }
        else if ( '0' <= str[scpt] && str[cpt] <= '9')
        {
            mot = 0;
        }
        cpt ++;
    }
    return str;
}
