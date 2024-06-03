/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:34:37 by imatek            #+#    #+#             */
/*   Updated: 2024/06/03 12:17:35 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(char flag, va_list pa)
{
	int	val;

	val = 0;
	if (flag == 'c')
		val = ft_print_char(pa);
	else if (flag == 's')
		val = ft_print_string(pa);
	else if (flag == 'p')
		val = ft_print_ptr(pa);
	else if (flag == 'u')
		val = ft_print_unsigned(pa);
	else if (flag == 'i' || flag == 'd')
		val = ft_print_id(pa);
	else if (flag == 'x' || flag == 'X')
		val = ft_print_hexa(pa);
	else if (flag == '%')
		val = ft_print_percent(pa);
	else
		val = 1;
	va_end(pa);
	return (val);
}
