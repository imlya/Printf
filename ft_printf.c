/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:44:51 by imatek            #+#    #+#             */
/*   Updated: 2024/06/04 14:12:42 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		val;
	va_list	pa;

	i = 0;
	val = 0;
	va_start(pa, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			val += ft_parse(format[i + 1], pa);
			i++;
		}
		else
			write (1, &format[i], 1);
		i++;
	}
	va_end(pa);
	return (val);
}

int main()
{
	char c;
	
	c = 'a';
	// int nb = 1000;
	printf("%d\n", ft_printf("%c"));
	return (0);
}
