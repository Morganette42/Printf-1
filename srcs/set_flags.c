#include "../includes/lib_printf.h"

int		ft_dashzero(const char *str, int pos, t_flags *flags, int nbr)
{
	if (str[pos - 1] == '0' || str[pos - 1] == '-')
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			flags->dash = 1;
			flags->zero = 0;
		}
		flags->width = nbr;
	}
	if (str[pos - 1] == '.')
	{
		if (nbr < 0)
			flags->dot = 0;
		flags->precision = nbr;
	}
	return (nbr);
}

int     ft_precision(const char *str, int pos, t_flags *flags)
{
    pos += 1;
    if (ft_isdigit(str[pos]) == 1)
    {
        flags->precision = ft_atoi(&str[pos]);
        while (ft_isdigit(str[pos]) == 1)
            pos++;
    }
    return (pos);
}

int     ft_width(const char *str, int pos, t_flags *flags)
{
    pos += 1;
    if (ft_isdigit(str[pos]) == 1)
    {
        flags->width = ft_atoi(&str[pos]);
        while (ft_isdigit(str[pos]) == 1)
            pos++;
    }
    return (pos);
}

/*
void    ft_search_flags(const char *str, int pos, t_flags *flags)
{
    char *test;
    int i;
    int var;
    char    converter;

    i = 0;
    while (str[i] && ft_is_converter(str[i]) != 1)
    {
        printf("Valeur de i : %d\n", i);
        if (str[i] == '0' || str[i] == '.' || str[i] == '*' 
            || str[i] == '-')
        {
            i += 1;
            var = ft_atoi(&str[i]);
            printf("Atoi : %d\n", var);
            while (ft_isdigit(str[i]))
                i++;
        }
        else
            i++;
    }
    converter = str[i];
}
*/