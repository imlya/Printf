/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:48 by imatek            #+#    #+#             */
/*   Updated: 2024/06/05 14:26:30 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(va_list pa)
{
	unsigned long	ptr;

	ptr = va_arg(pa, unsigned long);
	if (!ptr)
		return (write(1, "(nil)", 5));
	ft_putstr("0x");
	ft_putnbr_base_unsigned(ptr, "0123456789abcdef");
	return (ft_len_base_unsigned(ptr, 16) + 2);
}
