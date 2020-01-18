#include "../includes/lib_printf.h"
#include "../libft/libft.h"

int		ft_printf(const char *format, ...)
{
	va_list		params;
	int			i;
	t_flags		flags;

	ft_init_flags(&flags);
    
	va_start(params, format);
	{
		i = 0;
		while (format[i])
		{
            //printf("check\n\n");
			if (format[i] == '%')
            {
                //printf("Converter : %c\n", format[i + 1]);
				i = ft_dispatch_conversion(format, i, params);
				i = i + 1;
            }
			else
                ft_putchar(format[i]);
            i++;
		}
	}
	va_end(params);
	return (flags.ret);
}