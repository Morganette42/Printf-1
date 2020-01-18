#include "../includes/lib_printf.h"

int    ft_dispatch_conversion(const char *str, int pos, va_list params, t_flags *flags)
{
    ft_init_flags(flags);
    pos += 1;
    while (!(is_conv(str, pos)))
		pos = search_flags(params, str, pos, flags);
	if (str[pos] == 'c')
		return (ft_display_c(va_arg(params, int), pos, flags));
    if (str[pos] == 's')
        return (ft_display_s(va_arg(params, char *), pos, flags));
    if (str[pos] == 'p')
        return (ft_display_p(va_arg(params, char *), pos, flags));
    if (str[pos] == 'i' || str[pos] == 'd')
        return (ft_display_id(va_arg(params, int), pos, flags));
    if (str[pos] == 'u')
        return (ft_display_u(va_arg(params, int), pos, flags));
    if (str[pos] == 'x')
        return (ft_display_x(va_arg(params, char *), pos, flags));
    if (str[pos] == 'X')
        return (ft_display_X(va_arg(params, char *), pos, flags));
    if (str[pos] == '%')
        return (ft_display_perc('%'));
    return (pos);
}