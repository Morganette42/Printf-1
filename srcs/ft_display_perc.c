/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_perc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julpelle <julpelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:29:31 by julpelle          #+#    #+#             */
/*   Updated: 2020/02/19 18:25:27 by julpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_printf.h"

void	flags_percent(t_flags *flags)
{
	if (flags->dash > 0 || flags->dot > 0)
		flags->zero = 0;
	if (flags->zero > 0)
	{
		if (flags->star == 0)
			while (flags->width-- > 1)
				ft_putchar('0', flags);
		else
			flags->dash = 1;
	}
	else if (flags->zero == 0 && flags->dash == 0)
		while (flags->width-- > 1)
			ft_putchar(' ', flags);
	ft_putchar('%', flags);
	if (flags->dash > 0)
	{
		flags->zero = 0;
		while (flags->width-- > 1)
			ft_putchar(' ', flags);
	}
}

int		ft_display_perc(int pos, t_flags *flags)
{
	/*
	printf("TEST DASH : %d\n", flags->dash);
	printf("TEST ZERO : %d\n", flags->zero);
	printf("TEST DOT : %d\n", flags->dot);
	printf("TEST STAR : %d\n", flags->star);
	printf("TEST WIDTH : %d\n", flags->width);
	printf("TEST PREC : %d\n", flags->precision);
	printf("TEST LEN : %d\n", flags->len);
	*/
	if (flags->flag > 0)
		flags_percent(flags);
	else
	{
		while (flags->width-- > 1)
			ft_putchar(' ', flags);
		ft_putchar('%', flags);
	}
	return (pos + 1);
}
