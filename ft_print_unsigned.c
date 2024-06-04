/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:56 by imatek            #+#    #+#             */
/*   Updated: 2024/06/04 15:01:01 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_base_unsigned(unsigned long long nbr, int base)
{
	unsigned long long	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{	
		nbr = nbr / base;
		i++;
	}
	return (i);
}

int	ft_print_unsigned(va_list pa)
{
	int	val;

	val = va_arg(pa, unsigned long long);
	ft_putnbr_base_unsigned(val, "0123456789");
	return (ft_len_base_unsigned(val, 10));
}
