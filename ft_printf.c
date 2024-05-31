/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:44:51 by imatek            #+#    #+#             */
/*   Updated: 2024/05/30 20:36:06 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	val_ret(char flag, va_arg(va_list ap, type))
{
	char	val;

	if (flag == 'c')
	//flag = represente le format
		val = va_arg(c, char);
	return (write(1, &val, 1));
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	pa;
	va_start(pa, format);

	i = 0;
	while (format[i])
	{
		if (format[i] = [%] && format[i + 1])
			val_ret
	}
	XXX = va_arg(pa, const char *);
	va_end(pa);
	return (int xxx);
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

int ft_nb(char flag, va_arg)
{
	int nb_len;

	int nb = va_arg(arg, int);
	nb_len = ft_len(nb);
	ft_putnbr(nb);
	return (nb_len);
}

int main()
{
	char str[] = "imene";
	int nb = 1000;
	printf("%d\n", printf("salut %d\n", nb));
	return (0);
}