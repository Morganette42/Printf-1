/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julpelle <julpelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:32:53 by julpelle          #+#    #+#             */
/*   Updated: 2020/01/23 12:00:37 by julpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_printf.h"

/*
int		ft_printf(const char *format, ...)
{
	va_list		params;
	int			i;
	t_flags		*flags;
	flags = NULL;
	ft_init_flags(flags);
	va_start(params, format);
	{
		i = 0;
		while (format[i])
		{
			if (format[i] == '%')
            {
				i = ft_dispatch_conversion(format, i, params, flags);
				i = i + 1;
            }
			else
                ft_putchar(format[i]);
            i++;
		}
	}
	va_end(params);
	return (flags->ret);
}
*/ 

int		ft_printf(const char *str, ...)
{
	va_list		va;
	int			idx;
	t_flags		flags;

	ft_init_flags(&flags);
	va_start(va, str);
	{
		idx = 0;
		while (str[idx])
		{
			if (str[idx] == '%')
				idx = ft_dispatch_conversion(str, idx, va, &flags);
			while (str[idx] && str[idx] != '%')
			{
				ft_putchar(str[idx], &flags);
				idx++;
			}
		}
	}
	va_end(va);
	return (flags.ret);
}
