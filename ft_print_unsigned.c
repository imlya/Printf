/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:56 by imatek            #+#    #+#             */
/*   Updated: 2024/06/05 14:06:55 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(va_list pa)
{
	unsigned int	val;

	val = va_arg(pa, unsigned int);
	ft_putnbr_base_unsigned(val, "0123456789");
	return (ft_len_base_unsigned(val, 10));
}
