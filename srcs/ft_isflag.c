#include "../includes/lib_printf.h"

int		is_flag(const char *str, int pos)
{
	if (str[pos] == '-' || str[pos] == '0' || str[pos] == '.'
		|| str[pos] == '*')
		return (0);
	else
		return (1);
}