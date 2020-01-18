#ifndef _LIB_PRINTF_H_
#define _LIB_PRINTF_H_


// Includes
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft/libft.h"


// Structures

typedef struct   s_flags
{
    int flag;
    int dash;
    int zero;
    int dot;
    int star;
    int width;
    int precision;
    int ret;
}               t_flags;

// Functions 

int     ft_printf(const char *format, ...);
void    ft_putchar(const char c);
void    ft_putstr(const char *str);
void    ft_putnbr(long long int nb);
void    ft_putnbr_base(int nbr, char *base);
void    ft_putnbr_unsigned(long long int nb);


int     ft_isflag(const char *str, int pos);

void    ft_init_flags(t_flags *flags);

int     ft_dispatch_conversion(const char *str, int i, va_list params, t_flags *flags);

void    ft_display_c(va_list params);
void    ft_display_s(va_list params);
void    ft_display_id(va_list params);
void    ft_display_u(va_list params);
void    ft_display_p(va_list params);
void    ft_display_x(va_list params);
void    ft_display_X(va_list params);
void    ft_init_flags(t_flags *flags);
int     ft_is_converter(char c);


int		ft_dashzero(const char *str, int pos, t_flags *flags, int nbr);
int     ft_precision(const char *str, int pos, t_flags *flags);
int     ft_width(const char *str, int pos, t_flags *flags);




#endif 

