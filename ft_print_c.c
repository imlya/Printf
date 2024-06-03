/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:34:52 by imatek            #+#    #+#             */
/*   Updated: 2024/06/03 12:29:16 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	val_ret(char flag, va_list pa)
{
	char	val;

	val = 0;
	if (flag == 'c')
	{
		val = (char)va_arg(pa, int);
		write(1, &val, 1);
	}
	return (val);
}

int	val_ret(char flag, va_list pa)
{
	int	val;

	val = 0;
	if (flag == 'i' || flag == 'd')
	{
		val = va_arg(pa, int);
		ft_putnbr(val);
	}
	return (ft_len(val));
}

int	val_ret(char flag, va_list pa)
{
	char	*val;

	val = 0;
	if (flag == 's')
	{
		val = (char *)va_arg(pa, int);
		ft_putstr(val);
	}
	return (ft_strlen(val));
}

int	val_ret(char flag, va_list pa)
{
	char	val;

	val = 0;
	if (flag == 'c')
	{
		val = (char)va_arg(pa, int);
		write(1, &val, 1);
	}
	return (val);
}

int	val_ret(char flag, va_list pa)
{
	char	val;

	val = 0;
	if (flag == 'c')
	{
		val = (char)va_arg(pa, int);
		write(1, &val, 1);
	}
	return (val);
}

int	val_ret(char flag, va_list pa)
{
	char	val;

	val = 0;
	if (flag == 'c')
	{
		//val = ft_print_char(pa);
		val = (char)va_arg(pa, int);
		write(1, &val, 1);
	}
	return (val);
}
