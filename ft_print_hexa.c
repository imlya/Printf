/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:39 by imatek            #+#    #+#             */
/*   Updated: 2024/06/04 15:51:15 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(va_list pa)
{
	int	val;

	val = va_arg(pa, int);
	ft_putnbr_base_unsigned(val, "0123456789abcdef");
	return (ft_len_base_unsigned(val, 16));
}
