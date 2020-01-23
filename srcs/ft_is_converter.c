/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_converter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julpelle <julpelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:28:04 by julpelle          #+#    #+#             */
/*   Updated: 2020/01/21 15:05:28 by julpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_printf.h"

int ft_is_converter(const char *str, int pos)
{
	if (str[pos] == 'c' || str[pos] == 's' || str[pos] == 'p' || str[pos] == 'd'
			|| str[pos] == 'i' || str[pos] == 'u')
		return (1);
	else
		return (0);
}
