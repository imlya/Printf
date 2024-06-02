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
		if (format[i] = [%] && format[i + 1])
			val_ret
		i++;
	}
	return (val);
}

/*int main()
{
	char str[] = "imene";
	int nb = 1000;
	printf("%d\n", printf("salut %d\n", nb));
	return (0);
}*/
