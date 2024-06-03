/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:34:59 by imatek            #+#    #+#             */
/*   Updated: 2024/06/03 12:10:11 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar (nb + '0');
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

int	ft_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr != 0)
	{	
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_print_nb(char flag, va_list ap)
{
	int	nb_len;
	int	nb;

	nb_len = ft_len(nb);
	if (flag == 'i' || flag == 'd')
	{
		nb = va_arg(ap, int);
		ft_putnbr(nb);
	}
	return (nb_len);
}
