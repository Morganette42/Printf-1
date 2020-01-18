#include "includes/lib_printf.h"

int main(void)
{
    t_flags *flags;

    ft_init_flags(flags);
    printf("Dot : %d\n", flags->dot);
    return (0);
}