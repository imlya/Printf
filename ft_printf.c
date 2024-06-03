/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:44:51 by imatek            #+#    #+#             */
/*   Updated: 2024/06/03 12:20:22 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		val;
	va_list	pa;

	i = 0;
	va_start(pa, format);
	while (format[i])
	{
		if (format[i] == [%] && format[i + 1] == )
		val = val_ret('c', pa);
			i++;
	}
	va_end(pa);
	return (val);
}

int main()
{
	char c = 'a';
	int nb = 1000;
	printf("%d\n", printf("salut %c\n", nb));
	return (0);
}
