#include "../includes/lib_printf.h"

void    ft_init_flags(t_flags *flags)
{
    flags->flag = 0;
    flags->dash = 0;
    flags->zero = 0;
    flags->dot = 0;
    flags->star = 0;
    flags->width = 0;
    flags->precision = 0;
    flags->ret = 0;
}

